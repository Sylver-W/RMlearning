cmake_minimum_required(VERSION 2.8)
project(Task2)
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
add_executable(Task2 src/Task2.cpp)
target_link_libraries(Task2 ${OpenCV_LIBS})

