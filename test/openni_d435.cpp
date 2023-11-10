#include <pcl/io/openni2_grabber.h>
#include <pcl/visualization/cloud_viewer.h>
#include <functional>
#include <thread>

class SimpleOpenNIViewer {
public:
    SimpleOpenNIViewer() : viewer("PCL_OpenNI_Viewer") {}

    pcl::visualization::CloudViewer viewer;

    void cloud_cb_(const pcl::PointCloud<pcl::PointXYZ>::ConstPtr &cloud) {
        if (!viewer.wasStopped()) {
            viewer.showCloud(cloud);
        }
    }

    void run() {
        pcl::io::OpenNI2Grabber *interface = new pcl::io::OpenNI2Grabber();

        std::function<void(const pcl::PointCloud<pcl::PointXYZ>::ConstPtr &)> f = std::bind(&SimpleOpenNIViewer::cloud_cb_, this, std::placeholders::_1);

        interface->registerCallback(f);
        interface->start();

        while (!viewer.wasStopped()) {
            std::this_thread::sleep_for(std::chrono::seconds(1));
        }

        interface->stop();
    }
};

int main() {
    SimpleOpenNIViewer v;
    v.run();
    return 0;
}
