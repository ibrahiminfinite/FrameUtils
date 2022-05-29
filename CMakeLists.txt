cmake_minimum_required(VERSION 3.16)
project(FrameUtils)
set(CMAKE_CXX_STANDARD 20)

find_package( OpenCV REQUIRED )
include_directories(${OpenCV_INCLUDE_DIRS})
link_directories(${OpenCV_LIBRARY_DIRS})
add_definitions(${OpenCV_DEFINITIONS})

add_executable(cvtest main.cpp ImageUtils.cpp)
target_link_libraries(cvtest ${OpenCV_LIBS})