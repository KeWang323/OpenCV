// VideoCapture.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<opencv2\opencv.hpp>
#include<opencv2\imgproc.hpp>
#include<opencv2\highgui.hpp>
using namespace cv;
using namespace std;
int main() {
	VideoCapture capture(0);
	while (1) {
		Mat frame;
		capture >> frame;
		imshow("frame", frame);
		waitKey(10);
	}
	return 0;
}

