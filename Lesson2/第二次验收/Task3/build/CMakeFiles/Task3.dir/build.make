# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/illusion/Robomaster/WuXuanyi/第二次任务提交/Task3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/illusion/Robomaster/WuXuanyi/第二次任务提交/Task3/build

# Include any dependencies generated for this target.
include CMakeFiles/Task3.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Task3.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Task3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Task3.dir/flags.make

CMakeFiles/Task3.dir/src/Task3.cpp.o: CMakeFiles/Task3.dir/flags.make
CMakeFiles/Task3.dir/src/Task3.cpp.o: ../src/Task3.cpp
CMakeFiles/Task3.dir/src/Task3.cpp.o: CMakeFiles/Task3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/illusion/Robomaster/WuXuanyi/第二次任务提交/Task3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Task3.dir/src/Task3.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Task3.dir/src/Task3.cpp.o -MF CMakeFiles/Task3.dir/src/Task3.cpp.o.d -o CMakeFiles/Task3.dir/src/Task3.cpp.o -c /home/illusion/Robomaster/WuXuanyi/第二次任务提交/Task3/src/Task3.cpp

CMakeFiles/Task3.dir/src/Task3.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Task3.dir/src/Task3.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/illusion/Robomaster/WuXuanyi/第二次任务提交/Task3/src/Task3.cpp > CMakeFiles/Task3.dir/src/Task3.cpp.i

CMakeFiles/Task3.dir/src/Task3.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Task3.dir/src/Task3.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/illusion/Robomaster/WuXuanyi/第二次任务提交/Task3/src/Task3.cpp -o CMakeFiles/Task3.dir/src/Task3.cpp.s

# Object files for target Task3
Task3_OBJECTS = \
"CMakeFiles/Task3.dir/src/Task3.cpp.o"

# External object files for target Task3
Task3_EXTERNAL_OBJECTS =

Task3: CMakeFiles/Task3.dir/src/Task3.cpp.o
Task3: CMakeFiles/Task3.dir/build.make
Task3: /usr/local/lib/libopencv_gapi.so.4.8.0
Task3: /usr/local/lib/libopencv_highgui.so.4.8.0
Task3: /usr/local/lib/libopencv_ml.so.4.8.0
Task3: /usr/local/lib/libopencv_objdetect.so.4.8.0
Task3: /usr/local/lib/libopencv_photo.so.4.8.0
Task3: /usr/local/lib/libopencv_stitching.so.4.8.0
Task3: /usr/local/lib/libopencv_video.so.4.8.0
Task3: /usr/local/lib/libopencv_videoio.so.4.8.0
Task3: /usr/local/lib/libopencv_imgcodecs.so.4.8.0
Task3: /usr/local/lib/libopencv_dnn.so.4.8.0
Task3: /usr/local/lib/libopencv_calib3d.so.4.8.0
Task3: /usr/local/lib/libopencv_features2d.so.4.8.0
Task3: /usr/local/lib/libopencv_flann.so.4.8.0
Task3: /usr/local/lib/libopencv_imgproc.so.4.8.0
Task3: /usr/local/lib/libopencv_core.so.4.8.0
Task3: CMakeFiles/Task3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/illusion/Robomaster/WuXuanyi/第二次任务提交/Task3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Task3"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Task3.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Task3.dir/build: Task3
.PHONY : CMakeFiles/Task3.dir/build

CMakeFiles/Task3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Task3.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Task3.dir/clean

CMakeFiles/Task3.dir/depend:
	cd /home/illusion/Robomaster/WuXuanyi/第二次任务提交/Task3/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/illusion/Robomaster/WuXuanyi/第二次任务提交/Task3 /home/illusion/Robomaster/WuXuanyi/第二次任务提交/Task3 /home/illusion/Robomaster/WuXuanyi/第二次任务提交/Task3/build /home/illusion/Robomaster/WuXuanyi/第二次任务提交/Task3/build /home/illusion/Robomaster/WuXuanyi/第二次任务提交/Task3/build/CMakeFiles/Task3.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Task3.dir/depend

