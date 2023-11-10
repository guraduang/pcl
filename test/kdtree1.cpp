#include <pcl/io/pcd_io.h>
#include <pcl/point_types.h>
#include <pcl/search/kdtree.h>

int main()
{
    pcl::PointCloud<pcl::PointXYZ>::Ptr cloud(new pcl::PointCloud<pcl::PointXYZ>);
    pcl::io::loadPCDFile("/home/duang/Code/pcl/data-master/segmentation/mOSD/test/test9.pcd", *cloud);

    pcl::search::KdTree<pcl::PointXYZ>::Ptr kdtree(new pcl::search::KdTree<pcl::PointXYZ>);
    kdtree->setInputCloud(cloud); // Initialize the KdTree object with the point cloud data
    std::vector<int> indices;
    std::vector<float> distances;
    pcl::PointXYZ point = cloud->points[0];
    std::cout <<cloud->points.size();
    int k = 1;
    int size = kdtree->nearestKSearch(point, k, indices, distances);
    std::cout << "size_point： " << size << std::endl;

    double radius = 20.0;
    size = kdtree->radiusSearch(point, radius, indices, distances);
    std::cout << "size_point： " << size << std::endl;
    std::cin.get();
    return 0;
}
