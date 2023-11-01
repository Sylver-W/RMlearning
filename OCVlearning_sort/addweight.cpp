#include<opencv2/opencv.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/core/core.hpp>
using namespace cv;
int main(){
    Mat cat=imread("1.jpg");
    namedWindow("1",WINDOW_NORMAL);
    imshow("1",cat);
    waitKey(1000);
    Mat logo=imread("2.png");
    Mat imageROI;
    imageROI=cat(Rect(800,350,logo.cols,logo.rows));
    namedWindow("2",WINDOW_NORMAL);
    imshow("2",logo);
    waitKey(1000);
    addWeighted(imageROI,0.5,logo,0.3,0.,imageROI);
    namedWindow("2",WINDOW_NORMAL);
    imshow("2",cat);
    waitKey(0);
    return 0;
}
