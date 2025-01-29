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

    int rows = image.rows;
    int cols = image.cols;
    Mat result = image.clone();

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            result.at<uchar>(i,j) = (result.at<uchar>(i,j) + factor) % 256;
        }
    }

    //*****END OF YOUR CODE(DO NOT DELETE / MODIFY THIS LINE) *****

    return result;

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

    int rows = image.rows;
    int cols = image.cols;
    Mat result = image.clone();

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            result.at<uchar>(i,j) = int(result.at<uchar>(i,j) * factor) % 256;
        }
    }

    //*****END OF YOUR CODE(DO NOT DELETE / MODIFY THIS LINE) *****

    return result;

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

    Mat result = Mat(rows, cols, CV_8UC3, Vec3b(255, 255, 255));

    Vec3b red = Vec3b(0, 0, 255);
    Vec3b green = Vec3b(0, 255, 0);
    Vec3b yellow = Vec3b(0, 255, 255);


    for(int i=0; i<rows / 2; i++){
        for(int j=cols / 2; j<cols; j++){
            result.at<Vec3b>(i,j) = red;
        }
    }

    for(int i=rows / 2; i<rows; i++){
        for(int j=0; j<cols / 2; j++){
            result.at<Vec3b>(i,j) = green;
        }
    }

    for(int i=rows / 2; i<rows; i++){
        for(int j=cols/2; j<cols; j++){
            result.at<Vec3b>(i,j) = yellow;
        }
    }

    //*****END OF YOUR CODE(DO NOT DELETE / MODIFY THIS LINE) *****

    return result;

}

