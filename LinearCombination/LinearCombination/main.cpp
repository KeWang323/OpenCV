#include<opencv2\opencv.hpp>
#include<opencv2\highgui.hpp>

#define WINDOW_NAME "【线性混合示例】"
using namespace cv;
using namespace std;

const int g_nMaxAlphaValue = 100;
int g_nAlphaValueSlider;
double g_dAlphaValue;
double g_dBetaValue;

Mat g_srcImage1;
Mat g_srcImage2;
Mat g_dstImage;

void on_Tracker(int, void*) {
	g_dAlphaValue = (double)g_nAlphaValueSlider / g_nMaxAlphaValue;
	g_dBetaValue = 1.0 - g_dAlphaValue;
	addWeighted(g_srcImage1, g_dAlphaValue, g_srcImage2, g_dBetaValue, 0.0, g_dstImage);
	imshow(WINDOW_NAME, g_dstImage);
}

int main() {
	g_srcImage1 = imread("E:photos\\2015\\IMG_4718.PNG");
	g_srcImage2 = imread("E:photos\\2015\\IMG_6142.JPG");
	if (!g_srcImage1.data) {
		printf("读取失败！");
		return -1;
	}
	if (!g_srcImage2.data) {
		printf("读取失败！");
		return -1;
	}
	g_nAlphaValueSlider = 70;
	namedWindow(WINDOW_NAME, 1);
	char TrackbarName[50];
	sprintf(TrackbarName, "透明值 %d", g_nMaxAlphaValue);
	createTrackbar(TrackbarName, WINDOW_NAME, &g_nAlphaValueSlider, g_nMaxAlphaValue, on_Tracker);
	on_Tracker(g_nAlphaValueSlider, 0);

	waitKey(0);
	return 0;
}