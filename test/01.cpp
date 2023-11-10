#include <pcl/filters/passthrough.h>
#include <pcl/point_types.h>
#include <iostream>
#include <pcl/pcl_base.h>

int main()
{
    // 创建点云对象 cloud_in
    pcl::PointCloud<pcl::PointXYZ>::Ptr cloud_in(new pcl::PointCloud<pcl::PointXYZ>);

    // 假设你在这里对 cloud_in 进行填充，添加点云数据

    // 创建用于存储索引的容器
    std::vector<int> indices_x, indices_rem, indices_xz;
    pcl::PointCloud<pcl::PointXYZ>::Ptr cloud_out(new pcl::PointCloud<pcl::PointXYZ>);

    // 创建 PassThrough 过滤器
    pcl::PassThrough<pcl::PointXYZ> ptfilter(true); // 初始化为 true 以允许提取被移除的索引

    // 设置输入点云
    ptfilter.setInputCloud(cloud_in);

    // 第一个过滤器：基于 x 范围的过滤
    ptfilter.setFilterFieldName("x");
    ptfilter.setFilterLimits(0.0, 1000.0);
    ptfilter.filter(indices_x);
    indices_rem = ptfilter.getRemovedIndices();

    // 第二个过滤器：基于 z 范围的过滤
    ptfilter.setIndices(indices_x); // 使用之前的索引
    ptfilter.setFilterFieldName("z");
    ptfilter.setFilterLimits(-10.0, 10.0);
    ptfilter.setNegative(true);
    ptfilter.filter(indices_xz);

    // 第三个过滤器：基于 intensity 的过滤
    ptfilter.setIndices(indices_xz); // 使用之前的索引
    ptfilter.setFilterFieldName("intensity");
    ptfilter.setFilterLimits(std::numeric_limits<float>::lowest(), 0.5);
    ptfilter.setNegative(false);
    ptfilter.filter(*cloud_out);

    // 现在 cloud_out 包含了满足所有过滤条件的点云数据

    return 0;
}
