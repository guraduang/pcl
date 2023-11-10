#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/point_cloud2.hpp"
#include "pcl/point_types.h"

void pointCloudCallback(const sensor_msgs::msg::PointCloud2::SharedPtr msg)
{
  pcl::PointCloud<pcl::PointXYZ>::Ptr cloud(new pcl::PointCloud<pcl::PointXYZ>);

  pcl::fromPCLPointCloud2(msg, *cloud);
  cout<<"cloud_x"<< 
  // 在这里处理接收到的点云消息
}

int main(int argc, char *argv[])
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<rclcpp::Node>("realsense_pointcloud_subscriber");

  auto subscription = node->create_subscription<sensor_msgs::msg::PointCloud2>(
      "/realsense/point_cloud_topic", // 替换为实际的点云话题
      10,
      pointCloudCallback);

  rclcpp::spin(node);

  rclcpp::shutdown();
  return 0;
}
