#include<opencv2/opencv.hpp>
#include<opencv2/imgproc/imgproc.hpp>
#include<opencv2/highgui/highgui.hpp>
using namespace cv;
int main(){
    Mat src=imread("1.jpg");
    namedWindow("srcimage",WINDOW_NORMAL);
    imshow("srcimage",src);
    waitKey(10);
    Mat element=getStructuringElement(MORPH_RECT,Size(15,15));
    Mat dst;
    erode(src,dst,element);
    namedWindow("dstimage",WINDOW_NORMAL);
    imshow("dstimage",dst);
    waitKey(0);
    return 0;
}