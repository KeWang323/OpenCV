// edgeExtraction.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<opencv2\opencv.hpp>
#include<opencv2\imgproc.hpp>
#include<opencv2\highgui.hpp>
using namespace cv;
using namespace std;
int main() {
	Mat Img = imread("E:\\photos\\2015\\IMG_5577.JPG");
	imshow("original", Img);
	Mat result, edge, grayImg;
	cvtColor(Img, grayImg, COLOR_BGR2GRAY);
	imshow("grayImg", grayImg);
	blur(grayImg, edge, Size(15, 15));
	Canny(edge, result, 3, 9, 3);
	imshow("edge", result);
	waitKey(0);
	return 0;
}