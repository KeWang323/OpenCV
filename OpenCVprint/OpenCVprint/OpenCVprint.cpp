// OpenCVprint.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<opencv2\opencv.hpp>
#include<opencv2\imgproc.hpp>
#include<opencv2\highgui.hpp>
#include<iostream>
using namespace cv;
using namespace std;
int main() {
	Mat img = Mat(3, 3, CV_8UC1, 1);
	cout << "img(OpenCV默认风格) = " << endl << img << ";" << endl;
	cout << "img(Python风格) = " << endl << format(img, Formatter::FMT_PYTHON) << ";" << endl;
	cout << "img(Matlab风格) = " << endl << format(img, Formatter::FMT_MATLAB) << ";" << endl;
	cout << "img(Numpy风格) = " << endl << format(img, Formatter::FMT_NUMPY) << ";" << endl;
	cout << "img(CSV风格) = " << endl << format(img, Formatter::FMT_CSV) << ";" << endl;

	waitKey(0);
	return 0;
}