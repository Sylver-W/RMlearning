#include<opencv2/opencv.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/core/core.hpp>
using namespace cv;
using namespace std;
void RGBtoHSV(Mat src,Mat &dst){
    dst=Mat::zeros(src.rows,src.cols,CV_8UC3);
    for(int i=0;i<src.rows;i++){
        for(int j=0;j<src.cols;j++){
            float r,g,b,h,s,v;
            //获取BGR数值
            b=src.at<Vec3b>(i,j)[0]/255.0;
            g=src.at<Vec3b>(i,j)[1]/255.0;
            r=src.at<Vec3b>(i,j)[2]/255.0;//rgb转换到[0,1]
            v=max({r,g,b});//V是BGR中最大值
            float diff=v-min({r,g,b});//预处理最大与最小的差值
            if(v==0) s=0;
            else s=diff/(v+FLT_EPSILON);//FLT_EPSILON表示浮点型的最高精度，防止diff=0的情况
            if(v==r)h=60.0*(g-b)/(diff+FLT_EPSILON);
            else if(v==g)h=120.0+60.0*(b-r)/(diff+FLT_EPSILON);
            else if(v==b)h=240.0+60.0*(r-g)/(diff+FLT_EPSILON);
            if(h<0.0)h+=360.0;
            dst.at<Vec3b>(i,j)[0]=(uchar)(h/2);
            dst.at<Vec3b>(i,j)[1]=(uchar)(s*255);
            dst.at<Vec3b>(i,j)[2]=(uchar)(v*255);//将hsv转换到[0，255]
        }
    }
}
void RGBtoGRAY(Mat src,Mat &dst){
    dst=Mat::zeros(src.rows,src.cols,CV_8UC1);
    for(int i=0;i<src.rows;i++){
        for(int j=0;j<src.cols;j++){
            float r,g,b,gray;
            b=src.at<Vec3b>(i,j)[0];
            g=src.at<Vec3b>(i,j)[1];
            r=src.at<Vec3b>(i,j)[2];
            gray=r*0.3+g*0.59+b*0.11;//rgb加权平均
            dst.at<uchar>(i,j)=(uchar)(gray);//灰度图单通道
        }
    }
}
int main(){
    Mat rgb=imread("../img/1.jpg");
    Mat hsv,gray;
    RGBtoHSV(rgb,hsv);
    RGBtoGRAY(rgb,gray);
    imshow("rgb",rgb);
    imshow("hsv",hsv);
    imshow("gray",gray);
    waitKey(0);
    return 0;
}
