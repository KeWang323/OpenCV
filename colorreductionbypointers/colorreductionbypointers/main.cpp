#include <opencv2/core/core.hpp>  
#include <opencv2/highgui/highgui.hpp>  
#include <iostream>  
using namespace std;
using namespace cv;

void colorReduce(Mat& inputImage, Mat& outputImage, int div);

int main() {
	Mat srcImage = imread("E:\\photos\\2015\\IMG_5577.JPG");
	imshow("ԭʼͼ��", srcImage);

	Mat dstImage;
	dstImage.create(srcImage.rows, srcImage.cols, srcImage.type());

	double time0 = static_cast<double>(getTickCount());

	colorReduce(srcImage, dstImage, 32);

	time0 = ((double)getTickCount() - time0) / getTickFrequency();
	cout << "�˷�����ʱ��Ϊ" << time0 << "��" << endl;

	imshow("Ч��ͼ", dstImage);
	waitKey(0);
}

void colorReduce(Mat& inputImage, Mat& outputImage, int div) {

	outputImage = inputImage.clone();
	int rowNumber = outputImage.rows;
	int colNumber = outputImage.cols * outputImage.channels();

	for (int i = 0;i < rowNumber; i++) {
		uchar* data = outputImage.ptr<uchar>(i);
		for (int j = 0;j < colNumber;j++) {
			data[j] = data[j] / div * div + div / 2;
		}
	}
}