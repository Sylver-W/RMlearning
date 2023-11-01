#include<opencv2/opencv.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/core/core.hpp>
#include<iostream>
using namespace std;
using namespace cv;
int scale=100;
void enlarge_reduce(int,void*){
    //放大
    double k=(double)scale/100;
    Mat src=imread("../img/1.jpg");
    Mat mid,dst;
    mid=Mat::zeros((int)(k*(double)src.rows),(int)(k*(double)src.cols),CV_8UC3);//创建过渡矩阵
    for(int i=0;i<mid.rows;i++){
        for(int j=0;j<mid.cols;j++){
            mid.at<Vec3b>(i,j)=src.at<Vec3b>(i/k,j/k);//at操作对每个像素处理
        }
    }
    GaussianBlur(mid,dst,Size(5,5),3,3);//高斯模糊，减少边界突变感
    imshow("图像缩放",src);
    imshow("图像",dst);
}
int main(){
    namedWindow("图像缩放");
    createTrackbar("缩放比例","图像缩放",&scale,300,enlarge_reduce);//创建滑动条，调整缩放比例
    waitKey(0);
    return 0;
}