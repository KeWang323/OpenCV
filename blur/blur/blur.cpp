// blur.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<opencv2\opencv.hpp>
#include<opencv2\imgproc.hpp>
#include<opencv2\highgui.hpp>
using namespace cv;
using namespace std;
int main() {
	Mat img = imread("E:\\photos\\2015\\IMG_5577.JPG");
	imshow("original", img);
	Mat result;
	blur(img, result, Size(15, 15));
	imshow("result", result);
	waitKey(0);
	return 0;
}