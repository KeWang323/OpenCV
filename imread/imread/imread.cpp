// imread.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<opencv2\opencv.hpp>
using namespace cv;
using namespace std;
void main() {
	//Mat picture = imread("IMG_0480.JPG");
	Mat img = imread("E:\\photos\\2015\\IMG_5577.JPG");
	imshow("OpenCV", img);
	waitKey(0);
}