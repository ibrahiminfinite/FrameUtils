//
// Created by dark on 5/29/22.
//

#ifndef IMAGEUTILS_H
#define IMAGEUTILS_H

#include <opencv2/opencv.hpp>

typedef cv::Mat Image;

namespace Utils
{
    Image loadImage(std::string filePath);
    void saveImage(std::string filePath, Image img);

    std::vector<Image> loadColorFrames(std::string filePath);
    std::vector<Image> loadDepthFrames(std::string filePath);
}

#endif //IMAGEUTILS_H