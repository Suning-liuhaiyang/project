#include "caffe/caffe.hpp"
#include "opencv2/opencv.hpp"
using namespace cv;
int main(int argc, char** argv) {
  VideoCapture cap(1);
  if(!cap.isOpened())
    return -1;
  
  Mat edges;
  namedWindow("edges", 1);
  for(;;) {
    Mat frame;
    cap >> frame;
    imshow("edges", frame);
    if(waitKey(30) >= 0) break;
  }

  return 0;
}