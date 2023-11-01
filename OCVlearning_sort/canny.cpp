#include<opencv2/opencv.hpp>
#include<opencv2/imgproc/imgproc.hpp>
using namespace cv;
int main(){
    Mat src=imread("1.jpg");
    namedWindow("srcimage",WINDOW_FREERATIO);
    imshow("srcimage",src);
    Mat dst,edge,grayimage;
    dst.create(src.size(),src.type());
    cvtColor(src,grayimage,COLOR_BGR2GRAY);
    blur(grayimage,edge,Size(3,3));
    Canny(edge,edge,3,9,3);
    namedWindow("dstimage",WINDOW_NORMAL);
    imshow("dstimage",edge);
    waitKey(0);
    return 0;
}
