#include <opencv2/opencv.hpp>
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

using namespace cv;
using namespace std;

int main()
{
	Mat srcImage = imread("/home/duang/code/pcl/save/pcd_save/circle.jpeg");
	Mat dstImage = srcImage.clone();
	vector<Mat> imgChannels;
	split(srcImage, imgChannels);
	Mat midImage = imgChannels.at(2) - imgChannels.at(0);
	threshold(midImage, midImage, 30, 255, THRESH_BINARY);
	imshow("二值化", midImage);
	vector<vector<Point>> contours;
	findContours(midImage, contours, RETR_EXTERNAL, CHAIN_APPROX_SIMPLE);
	int temp_num = 0;
	double temp = 0;
	int temp_num2 = 0;
	double bi = 0;
	for (size_t i = 0; i < contours.size(); i++){
		double area = contourArea(contours[i]);
		Rect boundingRect1 = boundingRect(contours[i]);
		if (static_cast<double>(boundingRect1.width)  > boundingRect1.height ? 
		static_cast<double>(boundingRect1.width) / boundingRect1.height : boundingRect1.height / static_cast<double>(boundingRect1.width)){
			bi = static_cast<double>(boundingRect1.width) / boundingRect1.height;
			temp_num2 = i;
		}
		if (area > temp){
			temp = area;
			temp_num = i;
		}
	}
	cout << "max_area:" << temp << endl;
	cout << "bi = " << bi << endl;
	rectangle(dstImage, boundingRect(contours[temp_num]), Scalar(0, 255, 0), 2);
	RotatedRect rotatedRect = minAreaRect(contours[temp_num2]);
	Point2f rectPoints[4];
	rotatedRect.points(rectPoints);
	for (int j = 0; j < 4; j++){
		line(dstImage, rectPoints[j], rectPoints[(j + 1) % 4], Scalar(0, 0, 255), 2);
	}
	imshow("picture", dstImage);
	waitKey(0);
	return 0;
}