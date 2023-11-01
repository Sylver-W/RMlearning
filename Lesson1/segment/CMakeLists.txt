cmake_minimum_required(VERSION 2.8)
project(segmentation)
set(CMAKE_CXX_STANDARD 11)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
set(SOURCE_FILES src/main.cpp src/segment.cpp )

add_executable(Task src/main.cpp src/segment.cpp)
target_link_libraries(Task ${OpenCV_LIBS})