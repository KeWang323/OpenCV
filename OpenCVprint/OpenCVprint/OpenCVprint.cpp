// OpenCVprint.cpp : �������̨Ӧ�ó������ڵ㡣
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
	cout << "img(OpenCVĬ�Ϸ��) = " << endl << img << ";" << endl;
	cout << "img(Python���) = " << endl << format(img, Formatter::FMT_PYTHON) << ";" << endl;
	cout << "img(Matlab���) = " << endl << format(img, Formatter::FMT_MATLAB) << ";" << endl;
	cout << "img(Numpy���) = " << endl << format(img, Formatter::FMT_NUMPY) << ";" << endl;
	cout << "img(CSV���) = " << endl << format(img, Formatter::FMT_CSV) << ";" << endl;

	waitKey(0);
	return 0;
}