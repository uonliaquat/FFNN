# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/lib/python3.7/site-packages/cmake/data/CMake.app/Contents/bin/cmake

# The command to remove a file.
RM = /usr/local/lib/python3.7/site-packages/cmake/data/CMake.app/Contents/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/uonliaquat/Desktop/intelliRACE/NN

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/uonliaquat/Desktop/intelliRACE/NN

# Include any dependencies generated for this target.
include CMakeFiles/nn.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/nn.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/nn.dir/flags.make

CMakeFiles/nn.dir/src/main.cpp.o: CMakeFiles/nn.dir/flags.make
CMakeFiles/nn.dir/src/main.cpp.o: src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/uonliaquat/Desktop/intelliRACE/NN/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/nn.dir/src/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/nn.dir/src/main.cpp.o -c /Users/uonliaquat/Desktop/intelliRACE/NN/src/main.cpp

CMakeFiles/nn.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/nn.dir/src/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/uonliaquat/Desktop/intelliRACE/NN/src/main.cpp > CMakeFiles/nn.dir/src/main.cpp.i

CMakeFiles/nn.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/nn.dir/src/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/uonliaquat/Desktop/intelliRACE/NN/src/main.cpp -o CMakeFiles/nn.dir/src/main.cpp.s

CMakeFiles/nn.dir/src/Matrix.cpp.o: CMakeFiles/nn.dir/flags.make
CMakeFiles/nn.dir/src/Matrix.cpp.o: src/Matrix.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/uonliaquat/Desktop/intelliRACE/NN/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/nn.dir/src/Matrix.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/nn.dir/src/Matrix.cpp.o -c /Users/uonliaquat/Desktop/intelliRACE/NN/src/Matrix.cpp

CMakeFiles/nn.dir/src/Matrix.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/nn.dir/src/Matrix.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/uonliaquat/Desktop/intelliRACE/NN/src/Matrix.cpp > CMakeFiles/nn.dir/src/Matrix.cpp.i

CMakeFiles/nn.dir/src/Matrix.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/nn.dir/src/Matrix.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/uonliaquat/Desktop/intelliRACE/NN/src/Matrix.cpp -o CMakeFiles/nn.dir/src/Matrix.cpp.s

CMakeFiles/nn.dir/src/NeuralNetwork.cpp.o: CMakeFiles/nn.dir/flags.make
CMakeFiles/nn.dir/src/NeuralNetwork.cpp.o: src/NeuralNetwork.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/uonliaquat/Desktop/intelliRACE/NN/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/nn.dir/src/NeuralNetwork.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/nn.dir/src/NeuralNetwork.cpp.o -c /Users/uonliaquat/Desktop/intelliRACE/NN/src/NeuralNetwork.cpp

CMakeFiles/nn.dir/src/NeuralNetwork.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/nn.dir/src/NeuralNetwork.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/uonliaquat/Desktop/intelliRACE/NN/src/NeuralNetwork.cpp > CMakeFiles/nn.dir/src/NeuralNetwork.cpp.i

CMakeFiles/nn.dir/src/NeuralNetwork.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/nn.dir/src/NeuralNetwork.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/uonliaquat/Desktop/intelliRACE/NN/src/NeuralNetwork.cpp -o CMakeFiles/nn.dir/src/NeuralNetwork.cpp.s

CMakeFiles/nn.dir/src/Topology.cpp.o: CMakeFiles/nn.dir/flags.make
CMakeFiles/nn.dir/src/Topology.cpp.o: src/Topology.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/uonliaquat/Desktop/intelliRACE/NN/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/nn.dir/src/Topology.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/nn.dir/src/Topology.cpp.o -c /Users/uonliaquat/Desktop/intelliRACE/NN/src/Topology.cpp

CMakeFiles/nn.dir/src/Topology.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/nn.dir/src/Topology.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/uonliaquat/Desktop/intelliRACE/NN/src/Topology.cpp > CMakeFiles/nn.dir/src/Topology.cpp.i

CMakeFiles/nn.dir/src/Topology.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/nn.dir/src/Topology.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/uonliaquat/Desktop/intelliRACE/NN/src/Topology.cpp -o CMakeFiles/nn.dir/src/Topology.cpp.s

CMakeFiles/nn.dir/src/CSV.cpp.o: CMakeFiles/nn.dir/flags.make
CMakeFiles/nn.dir/src/CSV.cpp.o: src/CSV.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/uonliaquat/Desktop/intelliRACE/NN/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/nn.dir/src/CSV.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/nn.dir/src/CSV.cpp.o -c /Users/uonliaquat/Desktop/intelliRACE/NN/src/CSV.cpp

CMakeFiles/nn.dir/src/CSV.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/nn.dir/src/CSV.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/uonliaquat/Desktop/intelliRACE/NN/src/CSV.cpp > CMakeFiles/nn.dir/src/CSV.cpp.i

CMakeFiles/nn.dir/src/CSV.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/nn.dir/src/CSV.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/uonliaquat/Desktop/intelliRACE/NN/src/CSV.cpp -o CMakeFiles/nn.dir/src/CSV.cpp.s

# Object files for target nn
nn_OBJECTS = \
"CMakeFiles/nn.dir/src/main.cpp.o" \
"CMakeFiles/nn.dir/src/Matrix.cpp.o" \
"CMakeFiles/nn.dir/src/NeuralNetwork.cpp.o" \
"CMakeFiles/nn.dir/src/Topology.cpp.o" \
"CMakeFiles/nn.dir/src/CSV.cpp.o"

# External object files for target nn
nn_EXTERNAL_OBJECTS =

nn: CMakeFiles/nn.dir/src/main.cpp.o
nn: CMakeFiles/nn.dir/src/Matrix.cpp.o
nn: CMakeFiles/nn.dir/src/NeuralNetwork.cpp.o
nn: CMakeFiles/nn.dir/src/Topology.cpp.o
nn: CMakeFiles/nn.dir/src/CSV.cpp.o
nn: CMakeFiles/nn.dir/build.make
nn: /usr/local/lib/libopencv_dnn.4.2.0.dylib
nn: /usr/local/lib/libopencv_gapi.4.2.0.dylib
nn: /usr/local/lib/libopencv_highgui.4.2.0.dylib
nn: /usr/local/lib/libopencv_ml.4.2.0.dylib
nn: /usr/local/lib/libopencv_objdetect.4.2.0.dylib
nn: /usr/local/lib/libopencv_photo.4.2.0.dylib
nn: /usr/local/lib/libopencv_stitching.4.2.0.dylib
nn: /usr/local/lib/libopencv_video.4.2.0.dylib
nn: /usr/local/lib/libopencv_videoio.4.2.0.dylib
nn: /usr/local/lib/libopencv_imgcodecs.4.2.0.dylib
nn: /usr/local/lib/libopencv_calib3d.4.2.0.dylib
nn: /usr/local/lib/libopencv_features2d.4.2.0.dylib
nn: /usr/local/lib/libopencv_flann.4.2.0.dylib
nn: /usr/local/lib/libopencv_imgproc.4.2.0.dylib
nn: /usr/local/lib/libopencv_core.4.2.0.dylib
nn: /usr/local/Cellar/zbar/0.10_10/lib/libzbar.dylib
nn: CMakeFiles/nn.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/uonliaquat/Desktop/intelliRACE/NN/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable nn"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/nn.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/nn.dir/build: nn

.PHONY : CMakeFiles/nn.dir/build

CMakeFiles/nn.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/nn.dir/cmake_clean.cmake
.PHONY : CMakeFiles/nn.dir/clean

CMakeFiles/nn.dir/depend:
	cd /Users/uonliaquat/Desktop/intelliRACE/NN && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/uonliaquat/Desktop/intelliRACE/NN /Users/uonliaquat/Desktop/intelliRACE/NN /Users/uonliaquat/Desktop/intelliRACE/NN /Users/uonliaquat/Desktop/intelliRACE/NN /Users/uonliaquat/Desktop/intelliRACE/NN/CMakeFiles/nn.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/nn.dir/depend
