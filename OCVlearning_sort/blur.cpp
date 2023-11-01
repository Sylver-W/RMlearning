#include"opencv2/highgui.hpp"
#include"opencv2/imgproc.hpp"
#include<opencv2/opencv.hpp>
using namespace cv;
int main(){
    Mat src=imread("1.jpg");
    namedWindow("srcimage",WINDOW_NORMAL);
    imshow("srcimage",src);
    Mat dst;
    blur(src,dst,Size(11,11));
    namedWindow("dstimage",WINDOW_NORMAL);
    imshow("dstimage",dst);
    waitKey(0);
    return 0;
}