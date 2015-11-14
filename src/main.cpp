#include "helloworld/helloworld.h"
#include "joeshmoe/joeshmoe.h"
#include "tyler/tyler.h"
#include <iostream>
//#include <opencv2/opencv.hpp>

// Use the OpenCV namespace.
//using namespace cv;

int main() {
	
	// Call the library function.
	testFunction();

	// Example
	tylerFunction();
	tylerFunction2();

    // Using OpenCV
    //Mat image = imread("../files/cubecats.png", 1);
    //namedWindow("CubeCats", WINDOW_AUTOSIZE);
    //imshow("CubeCats", image);
    //waitKey(0);

	// Return zero (success).
	return 0;
};
