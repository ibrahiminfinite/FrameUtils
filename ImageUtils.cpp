//
// Created by dark on 5/29/22.
//
#include <iostream>
#include <filesystem>
#include <string_view>
#include "ImageUtils.h"

using std::filesystem::directory_iterator;

Image Utils::loadImage(std::string filePath)
{
    return cv::imread(filePath,1);
}


std::vector<Image> Utils::loadColorFrames(std::string directoryPath)
{

    std::vector<Image> frames;

    // Iterate through files in the directory.
    for(const auto & file : directory_iterator(directoryPath))
    {
        std::string_view fileType = ".png";
        std::string fileStr = file.path().string();

        if(fileStr.ends_with(fileType))
        {
            std::cout<<fileStr << std::endl;
            frames.emplace_back(loadImage(fileStr));
        }
    }
    return frames;
}
std::vector<Image> Utils::loadDepthFrames(std::string directoryPath)
{

    std::vector<Image> frames;

    // Iterate through files in the directory.
    for(const auto & file : directory_iterator(directoryPath))
    {
        std::string_view fileType = ".exr";
        std::string fileStr = file.path().string();

        if(fileStr.ends_with(fileType))
        {
            std::cout<<fileStr << std::endl;
            frames.emplace_back(loadImage(fileStr));
        }
    }
    return frames;
}
