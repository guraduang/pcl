// pcd的写入
#include <pcl/point_types.h>
#include <pcl/io/pcd_io.h>
#include <iostream>
#include <pcl/point_cloud.h>
#include <pcl/filters/passthrough.h>
#include <pcl/common/common.h>
#include <pcl/common/io.h>
#include <pcl/kdtree/kdtree_flann.h>

// 查找最大距离点
void minmax(pcl::PointCloud<pcl::PointXYZ>::Ptr cloud)
{
    pcl::PointXYZ min;
    pcl::PointXYZ max;
    pcl::getMinMax3D(*cloud, min, max);
    std::cerr << "min.x= " << min.x << " "
              << "max.x= " << max.x << std::endl;
    std::cerr << "min.y= " << min.y << " "
              << "max.y= " << max.y << std::endl;
    std::cerr << "min.z= " << min.z << " "
              << "max.z= " << max.z << std::endl;

    Eigen::Vector4f set_point;
    Eigen::Vector4f max_point;
    set_point << 0.0, 0.0, 0.0, 1;
    pcl::getMaxDistance(*cloud, set_point, max_point);
    std::cout << "max_point" << max_point << std::endl;

    // 将indexs索引的点存储到*cloud中，不写indexs则为将点云复制到另一个点云中
    std::vector<int> indexs = {0, 1, 2};
    pcl::copyPointCloud(*cloud, indexs, *cloud);
    for (int i : indexs)
    {
        std::cout << "indexs：" << i << std::endl;
    }

    pcl::KdTreeFLANN<pcl::PointXYZ> kdtree;
    std::vector<int> point_indices(1);
    std::vector<float> point_distances(1);
    kdtree.setInputCloud(cloud);
    kdtree.nearestKSearch(max, 2, point_indices, point_distances);
    std::cout << "point_indices= " << point_indices[1] << std::endl;
    std::cout << "point_distances= " << point_distances[0] << std::endl;
}

// 筛掉x点 除区间(0,1)的值
void filter(pcl::PointCloud<pcl::PointXYZ>::Ptr cloud)
{

    pcl::PassThrough<pcl::PointXYZ> pass;
    pass.setInputCloud(cloud);
    pass.setNegative(false); // 此处如果设置为true，则返回的是取值范围外的点集；如果设置为false，则是返回取值范围内,默认为false
    pass.setFilterFieldName("x");
    pass.setFilterLimits(0.0, 1.0);
    pass.filter(*cloud); // 执行操作
    std::cerr << "Cloud after filtering: " << std::endl;

    for (const auto &point : *cloud)
    {
        std::cout << std::endl;
        std::cerr << "    "
                  << "point.x= " << point.x << " "
                  << "point.y= " << point.y << " "
                  << "point.z= " << point.z << std::endl;
    }
}

int main()
{
    pcl::PointCloud<pcl::PointXYZ>::Ptr cloud(new pcl::PointCloud<pcl::PointXYZ>);
    pcl::PCDReader reader;
    reader.read("/home/duang/Code/pcl/data-master/biwi_face_database/model.pcd", *cloud);
    // cloud->width = 1;
    // cloud->height = 8;
    // cloud->points.resize(cloud->width * cloud->height);

    // for (std::size_t i = 0; i < cloud->points.size(); i++)
    // {
    //     cloud->points[i].x = 1024 * rand() / (RAND_MAX + 1.0f);
    //     cloud->points[i].y = 1024 * rand() / (RAND_MAX + 1.0f);
    //     cloud->points[i].z = 1024 * rand() / (RAND_MAX + 1.0f);
    // }

    // std::cerr << "Cloud before filtering: " << std::endl;
    // for (const auto &point : *cloud)
    //     std::cerr << "    "
    //               << "point.x= " << point.x << " "
    //               << "point.y= " << point.y << " "
    //               << "point.z= " << point.z << std::endl;
    filter(cloud);
    minmax(cloud);
    // pcl::io::savePCDFileASCII("/home/duang/code/pcl/save/pcd_save/pcd.pcd", *cloud);
    return 0;
}