#include <pcl/io/pcd_io.h>
#include <pcl/point_types.h>
// 包含相关头文件
#include <pcl/kdtree/kdtree_flann.h>
typedef pcl::PointXYZ PointT;
int main()
{
	pcl::PointCloud<PointT>::Ptr cloud(new pcl::PointCloud<PointT>);
	pcl::io::loadPCDFile("/home/duang/Code/pcl/data-master/segmentation/mOSD/test/test9.pcd", *cloud);
	pcl::KdTreeFLANN<pcl::PointXYZ> kdtree; //创建KDtree
	kdtree.setInputCloud(cloud); // 设置要搜索的点云，建立KDTree
	std::vector<int> indices; // 存储查询近邻点索引
	std::vector<float> distances; // 存储近邻点对应距离的平方
	PointT point = cloud->points[0]; // 初始化一个查询点
	
	// 查询距point最近的k个点
	int k = 10;
	int size = kdtree.nearestKSearch(point, k, indices, distances);
	std::cout << "search point : " << size << std::endl;
	// 查询point半径为radius邻域球内的点
	double radius = 2.0;
	size = kdtree.radiusSearch(point, radius, indices, distances);
	std::cout << "search point : " << size << std::endl;
	std::cin.get();
	return 0;
}