// edgefromframes.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<opencv2\opencv.hpp>
#include<opencv2\imgproc.hpp>
#include<opencv2\highgui.hpp>
using namespace cv;
using namespace std;
int main() {
	VideoCapture capture(0);
	printf(CV_VERSION);
	while (1) {
		Mat frame, result, edge, grayImg;
		capture >> frame;
		cvtColor(frame, grayImg, COLOR_BGR2GRAY);
		imshow("grayImg", grayImg);
		blur(grayImg, edge, Size(15, 15));
		Canny(edge, result, 3, 9, 3);
		imshow("canny", result);
		waitKey(100);
	}
	return 0;
}