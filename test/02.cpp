#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>
#include <string>

using namespace cv;
using namespace std;

int main()
{
    VideoCapture cap("/media/duang/Ventoy/1.mp4"); // 用你的.avi文件的路径替换"your_video.avi"

    if (!cap.isOpened())
    {
        cout << "无法打开视频文件" << endl;
        return -1;
    }

    int frameCount = 0;
    int num = 0;
    while (true)
    {
        Mat frame;
        cap >> frame;

        if (frame.empty())
        {
            break;
        }
        string frameFileName = "/media/duang/Ventoy/save1/" + to_string(num) + ".png";
        if (frameCount % 15 == 0)
        {
            imwrite(frameFileName, frame);
            num++;
        }

        frameCount++;
    }
    cap.release();
    return 0;
}
