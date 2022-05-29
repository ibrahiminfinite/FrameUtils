//
// Created by dark on 5/29/22.
//
#include <iostream>
#include "ImageUtils.h"

int main()
{
    auto color_frames = Utils::loadColorFrames("~/code/FrameUtils/colour");
    auto depth_frames = Utils::loadDepthFrames("~/FrameUtils/depth_original");
    std::cout<<color_frames.size()<<std::endl;
    std::cout<<depth_frames.size()<<std::endl;
}
