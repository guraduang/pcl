#include <pcl/io/pcd_io.h>
#include <iostream>

int main()
{
    pcl::PointCloud<pcl::PointXYZ>::Ptr cloud(new pcl::PointCloud<pcl::PointXYZ>);
    pcl::PCDReader read_pcd;
    read_pcd.read("/home/duang/code/pcl/data-master/biwi_face_database/model.pcd", *cloud);
    std::cout << "width = " << cloud->width << std::endl;
    std::cout << "height = " << cloud->height<< std::endl;
    for(size_t i = 0; i < cloud->width; i++)
    {
        std::cout << "point.x = " << cloud->points[i].x << std::endl;   
        std::cout << "point.y = " << cloud->points[i].y << std::endl; 
        std::cout << "point.z = " << cloud->points[i].z << std::endl; 
    }
    std::cout << "head = " << cloud->header.frame_id << std::endl; 
    return 0;
}