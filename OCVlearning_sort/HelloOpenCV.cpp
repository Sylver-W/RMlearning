#include<opencv2/opencv.hpp>
#include<iostream>
using namespace std;
using namespace cv;
int main(){
    Mat img=imread("1.jpg");
    namedWindow("new", WINDOW_NORMAL);
    imshow("new",img);
    waitKey(0);
    return 0;
}