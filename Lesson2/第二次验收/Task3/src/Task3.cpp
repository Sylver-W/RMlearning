#include<opencv2/opencv.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/core/core.hpp>
#include<vector>
using namespace std;
using namespace cv;
void find_lis(){
    Mat src=imread("../img/3.png");
    Mat gau;
    GaussianBlur(src,gau,Size(9,9),3,3);//高斯模糊，消除一定噪点
    Mat hsv;
    cvtColor(gau,hsv,COLOR_BGR2HSV);//rgb转换为hsv，便于阈值分割
    Mat bin;
    inRange(hsv,Scalar(100,100,100),Scalar(124,255,255),bin);//阈值分割，分割出蓝色
    Mat close;
    Mat kernel=getStructuringElement(MORPH_RECT,Size(9,9));//闭操作，先膨胀，再腐蚀
    morphologyEx(bin,close,MORPH_CLOSE,kernel);   
    vector<vector<Point>>contours;
    vector<Vec4i>hierarchy;
    findContours(close,contours,hierarchy,RETR_EXTERNAL,CHAIN_APPROX_SIMPLE);//仅查找外轮廓，仅保存拐点
    Mat dst;
    for(int i=0;i<contours.size();i++){//遍历保存的轮廓
        Rect rec=boundingRect(contours[i]);//找到外接矩形
        double wid=rec.width;
        double hei=rec.height;
        if(wid/hei>=2.0&&wid/hei<=4.0&&rec.area()>1000){//限定宽高比及面积
            dst=src(rec); 
            imshow("liscence",dst);
            imwrite("../result/result.jpg",dst);//保存图片
            rectangle(src,rec,Scalar(0,255,255),1);//黄色线框出
            imshow("result",src);
        }
    }
    
    
    
}
int main(){
    Mat img=imread("3.png");
    namedWindow("result");
    find_lis();
    waitKey(0);
    return 0;
}