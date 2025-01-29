#include <iostream>
#include <opencv2/opencv.hpp>
using namespace std;
using namespace cv;

Mat negative_image(Mat image){

    Mat negative = image.clone();

    for(int i=0; i<image.rows; i++){
        for(int j=0; j<image.cols; j++){
            negative.at<uchar>(i,j) = 255 - image.at<uchar>(i,j);
        }
    }

    return negative;
}


Mat add_scalar(Mat image, int factor){
    /*
     * Add a scalar to the entire image
     * Hint:
     *  Values may overshoot
     *  Checkout clone() method provided by OpenCV
     * Args:
     *  image: input grayscale image
     *  factor: value to add to each pixel of the image
     * Variables:
     *  rows: number of rows of the image
     *  cols: number of columns of the image
     * Return:
     *  result: transformed matrix
     */

    //*****START OF YOUR CODE (DO NOT DELETE/MODIFY THIS LINE)*****


  

    //*****END OF YOUR CODE(DO NOT DELETE / MODIFY THIS LINE) *****

    return image;

}

Mat mul_scalar(Mat image, float factor){
    /*
     * Multiply a scalar to the entire image
     * Hint:
     *  Values may overshoot
     *  Checkout clone() method provided by OpenCV
     * Args:
     *  image: input grayscale image
     *  factor: value to multiply to each pixel of the image
     * Variables:
     *  rows: number of rows of the image
     *  cols: number of columns of the image
     * Return:
     *  result: transformed matrix
     */

    //*****START OF YOUR CODE (DO NOT DELETE/MODIFY THIS LINE)*****

  
    //*****END OF YOUR CODE(DO NOT DELETE / MODIFY THIS LINE) *****

    return image;

}

Mat draw_squares(int rows, int cols){
    /*
     * Initialize a Mat object in order to create a square divided in four sub-squares which you are
     * going to color from top to bottom, left to right as: white, red, green, yellow
     * Hint:
     *  The channels are BGR not RGB
     *  value 0 means black 255 value means white (0 intensity to full intensity)
     *  You can initialize the image with White at the beginning
     * Args:
     *  rows: number of rows of the image
     *  cols: number of cols of the image
     * Variables:
     *  red: vector representing red color
     *  green: vector representing green color
     *  yellow: vector representing yellow color
     * Return:
     *  result: final matrix
     */

    //*****START OF YOUR CODE (DO NOT DELETE/MODIFY THIS LINE)*****

    
    //*****END OF YOUR CODE(DO NOT DELETE / MODIFY THIS LINE) *****

    return Mat(1,1, CV_64F, 0.0);;

}

