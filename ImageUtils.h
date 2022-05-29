//
// Created by dark on 5/29/22.
//

#ifndef DARTROBOTS_IMAGEUTILS_H
#define DARTROBOTS_IMAGEUTILS_H

#endif //DARTROBOTS_IMAGEUTILS_H

#include <opencv2/opencv.hpp>

typedef cv::Mat Image;

namespace Utils
{
    Image loadImage(std::string filePath);
    void saveImage(std::string filePath, Image img);

    std::vector<Image> loadColorFrames(std::string filePath);
    std::vector<Image> loadDepthFrames(std::string filePath);
}