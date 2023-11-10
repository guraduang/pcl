#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>

int main() {
    // 打开.avi视频文件
    cv::VideoCapture cap("/home/duang/station/2023-08-04-14-28-15.avi");

    if (!cap.isOpened()) {
        std::cerr << "无法打开视频文件." << std::endl;
        return -1;
    }

    // 创建一个窗口来显示视频
    cv::namedWindow("Video", cv::WINDOW_NORMAL);

    while (true) {
        cv::Mat frame;
        cap >> frame; // 读取下一帧

        if (frame.empty()) {
            std::cerr << "无法读取帧或已经到达视频末尾." << std::endl;
            break;
        }

        cv::imshow("Video", frame); // 显示帧

        char key = cv::waitKey(30); // 等待用户按键，延时30毫秒

        if (key == 27) { // 如果用户按下ESC键，退出循环
            break;
        }
    }

    // 释放VideoCapture对象
    cap.release();

    // 关闭OpenCV窗口
    cv::destroyAllWindows();

    return 0;
}
