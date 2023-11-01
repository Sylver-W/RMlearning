[TOC]

# Lesson1 任务完成情况

## Task1

使用双系统完成

## Task3

1. 最常用的命令位于/bin中

2. 执行图片如下：![](/home/illusion/图片/截图/1.png "Task3")

## Task4

1. 编写CMakeLists.txt如下：

```
cmake_minimum_required(VERSION 3.5)
project(Hw)
add_executable(Hello-world hw.cpp)
```

2. 创建build文件夹，cd进入，输入命令``cmake..``,随后使用``make``命令，运行可执行文件，得到如下结果
   
   ![](/home//illusion/图片/截图/2.png)

## Task5

> 安装opencv 4.8.0

测试结果如下

<img src="/home/illusion/图片/截图/3.png" style="zoom:30%;" />

**安装时遇到的几个问题**

+ 安装opencv依赖项的时候出现``无法定位 libjasper-dev``

  解决方法

  ``` 
  sudo add-apt-repository "deb http://security.ubuntu.com/ubuntu xenial-security main"
  sudo apt update
  sudo apt install libjasper1 libjasper-dev
  ```

+ 上一个解决方法出现``NO_PUBKEY ``报错

  解决方法

  ``` 
  sudo apt-key adv --keyserver hkp://keyserver.ubuntu.com:80 --recv 报错语句后的字符
  ```

## Task6

1. CMakeLists.txt补全如下

   ```
   cmake_minimum_required(VERSION 2.8)
   project(segmentation)
   set(CMAKE_CXX_STANDARD 11)
   
   find_package(OpenCV REQUIRED)
   include_directories(${OpenCV_INCLUDE_DIRS})
   set(SOURCE_FILES src/main.cpp src/segment.cpp )
   
   add_executable(Task src/main.cpp src/segment.cpp)
   target_link_libraries(Task ${OpenCV_LIBS})
   ```

2. 能够成功运行，结果如下

   ![](/home/illusion/图片/截图/截图 2023-10-20 20-32-13.png)

