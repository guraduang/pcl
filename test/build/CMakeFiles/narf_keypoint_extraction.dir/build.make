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
CMAKE_SOURCE_DIR = /home/duang/Code/pcl/test

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/duang/Code/pcl/test/build

# Include any dependencies generated for this target.
include CMakeFiles/narf_keypoint_extraction.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/narf_keypoint_extraction.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/narf_keypoint_extraction.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/narf_keypoint_extraction.dir/flags.make

CMakeFiles/narf_keypoint_extraction.dir/narf_keypoint_extraction.cpp.o: CMakeFiles/narf_keypoint_extraction.dir/flags.make
CMakeFiles/narf_keypoint_extraction.dir/narf_keypoint_extraction.cpp.o: ../narf_keypoint_extraction.cpp
CMakeFiles/narf_keypoint_extraction.dir/narf_keypoint_extraction.cpp.o: CMakeFiles/narf_keypoint_extraction.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/duang/Code/pcl/test/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/narf_keypoint_extraction.dir/narf_keypoint_extraction.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/narf_keypoint_extraction.dir/narf_keypoint_extraction.cpp.o -MF CMakeFiles/narf_keypoint_extraction.dir/narf_keypoint_extraction.cpp.o.d -o CMakeFiles/narf_keypoint_extraction.dir/narf_keypoint_extraction.cpp.o -c /home/duang/Code/pcl/test/narf_keypoint_extraction.cpp

CMakeFiles/narf_keypoint_extraction.dir/narf_keypoint_extraction.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/narf_keypoint_extraction.dir/narf_keypoint_extraction.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/duang/Code/pcl/test/narf_keypoint_extraction.cpp > CMakeFiles/narf_keypoint_extraction.dir/narf_keypoint_extraction.cpp.i

CMakeFiles/narf_keypoint_extraction.dir/narf_keypoint_extraction.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/narf_keypoint_extraction.dir/narf_keypoint_extraction.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/duang/Code/pcl/test/narf_keypoint_extraction.cpp -o CMakeFiles/narf_keypoint_extraction.dir/narf_keypoint_extraction.cpp.s

# Object files for target narf_keypoint_extraction
narf_keypoint_extraction_OBJECTS = \
"CMakeFiles/narf_keypoint_extraction.dir/narf_keypoint_extraction.cpp.o"

# External object files for target narf_keypoint_extraction
narf_keypoint_extraction_EXTERNAL_OBJECTS =

narf_keypoint_extraction: CMakeFiles/narf_keypoint_extraction.dir/narf_keypoint_extraction.cpp.o
narf_keypoint_extraction: CMakeFiles/narf_keypoint_extraction.dir/build.make
narf_keypoint_extraction: /usr/local/lib/libpcl_surface.so
narf_keypoint_extraction: /usr/local/lib/libpcl_keypoints.so
narf_keypoint_extraction: /usr/local/lib/libpcl_tracking.so
narf_keypoint_extraction: /usr/local/lib/libpcl_recognition.so
narf_keypoint_extraction: /usr/local/lib/libpcl_stereo.so
narf_keypoint_extraction: /usr/local/lib/libpcl_outofcore.so
narf_keypoint_extraction: /usr/local/lib/libpcl_people.so
narf_keypoint_extraction: /usr/lib/libOpenNI.so
narf_keypoint_extraction: /usr/lib/x86_64-linux-gnu/libusb-1.0.so
narf_keypoint_extraction: /usr/lib/x86_64-linux-gnu/libOpenNI2.so
narf_keypoint_extraction: /usr/lib/x86_64-linux-gnu/libusb-1.0.so
narf_keypoint_extraction: /usr/lib/x86_64-linux-gnu/libflann_cpp.so
narf_keypoint_extraction: /usr/local/lib/librealsense2.so.2.54.1
narf_keypoint_extraction: /usr/local/lib/libopencv_gapi.so.4.6.0
narf_keypoint_extraction: /usr/local/lib/libopencv_highgui.so.4.6.0
narf_keypoint_extraction: /usr/local/lib/libopencv_ml.so.4.6.0
narf_keypoint_extraction: /usr/local/lib/libopencv_objdetect.so.4.6.0
narf_keypoint_extraction: /usr/local/lib/libopencv_photo.so.4.6.0
narf_keypoint_extraction: /usr/local/lib/libopencv_stitching.so.4.6.0
narf_keypoint_extraction: /usr/local/lib/libopencv_video.so.4.6.0
narf_keypoint_extraction: /usr/local/lib/libopencv_videoio.so.4.6.0
narf_keypoint_extraction: /usr/local/lib/libpcl_registration.so
narf_keypoint_extraction: /usr/local/lib/libpcl_segmentation.so
narf_keypoint_extraction: /usr/local/lib/libpcl_features.so
narf_keypoint_extraction: /usr/local/lib/libpcl_filters.so
narf_keypoint_extraction: /usr/local/lib/libpcl_sample_consensus.so
narf_keypoint_extraction: /usr/local/lib/libpcl_ml.so
narf_keypoint_extraction: /usr/local/lib/libpcl_visualization.so
narf_keypoint_extraction: /usr/local/lib/libpcl_search.so
narf_keypoint_extraction: /usr/local/lib/libpcl_kdtree.so
narf_keypoint_extraction: /usr/local/lib/libpcl_io.so
narf_keypoint_extraction: /usr/local/lib/libpcl_octree.so
narf_keypoint_extraction: /usr/lib/x86_64-linux-gnu/libpng.so
narf_keypoint_extraction: /usr/lib/x86_64-linux-gnu/libz.so
narf_keypoint_extraction: /usr/lib/libOpenNI.so
narf_keypoint_extraction: /usr/lib/x86_64-linux-gnu/libusb-1.0.so
narf_keypoint_extraction: /usr/lib/x86_64-linux-gnu/libOpenNI2.so
narf_keypoint_extraction: /usr/local/lib/libvtkChartsCore-8.2.so.1
narf_keypoint_extraction: /usr/local/lib/libvtkInfovisCore-8.2.so.1
narf_keypoint_extraction: /usr/local/lib/libvtkInteractionImage-8.2.so.1
narf_keypoint_extraction: /usr/local/lib/libvtkIOGeometry-8.2.so.1
narf_keypoint_extraction: /usr/local/lib/libvtkIOLegacy-8.2.so.1
narf_keypoint_extraction: /usr/local/lib/libvtkIOPLY-8.2.so.1
narf_keypoint_extraction: /usr/local/lib/libvtkRenderingLOD-8.2.so.1
narf_keypoint_extraction: /usr/local/lib/libvtkViewsContext2D-8.2.so.1
narf_keypoint_extraction: /usr/local/lib/libvtkViewsCore-8.2.so.1
narf_keypoint_extraction: /usr/local/lib/libvtkInteractionWidgets-8.2.so.1
narf_keypoint_extraction: /usr/local/lib/libvtkFiltersModeling-8.2.so.1
narf_keypoint_extraction: /usr/local/lib/libvtkInteractionStyle-8.2.so.1
narf_keypoint_extraction: /usr/local/lib/libvtkFiltersExtraction-8.2.so.1
narf_keypoint_extraction: /usr/local/lib/libvtkFiltersStatistics-8.2.so.1
narf_keypoint_extraction: /usr/local/lib/libvtkImagingFourier-8.2.so.1
narf_keypoint_extraction: /usr/local/lib/libvtkFiltersHybrid-8.2.so.1
narf_keypoint_extraction: /usr/local/lib/libvtkImagingGeneral-8.2.so.1
narf_keypoint_extraction: /usr/local/lib/libvtkImagingSources-8.2.so.1
narf_keypoint_extraction: /usr/local/lib/libvtkImagingHybrid-8.2.so.1
narf_keypoint_extraction: /usr/local/lib/libvtkIOImage-8.2.so.1
narf_keypoint_extraction: /usr/local/lib/libvtkDICOMParser-8.2.so.1
narf_keypoint_extraction: /usr/local/lib/libvtkmetaio-8.2.so.1
narf_keypoint_extraction: /usr/local/lib/libvtkpng-8.2.so.1
narf_keypoint_extraction: /usr/local/lib/libvtktiff-8.2.so.1
narf_keypoint_extraction: /usr/local/lib/libvtkjpeg-8.2.so.1
narf_keypoint_extraction: /usr/local/lib/libvtkRenderingAnnotation-8.2.so.1
narf_keypoint_extraction: /usr/local/lib/libvtkImagingColor-8.2.so.1
narf_keypoint_extraction: /usr/local/lib/libvtkRenderingVolume-8.2.so.1
narf_keypoint_extraction: /usr/local/lib/libvtkIOXML-8.2.so.1
narf_keypoint_extraction: /usr/local/lib/libvtkIOXMLParser-8.2.so.1
narf_keypoint_extraction: /usr/local/lib/libvtkIOCore-8.2.so.1
narf_keypoint_extraction: /usr/local/lib/libvtkdoubleconversion-8.2.so.1
narf_keypoint_extraction: /usr/local/lib/libvtklz4-8.2.so.1
narf_keypoint_extraction: /usr/local/lib/libvtklzma-8.2.so.1
narf_keypoint_extraction: /usr/local/lib/libvtkexpat-8.2.so.1
narf_keypoint_extraction: /usr/local/lib/libvtkRenderingContextOpenGL2-8.2.so.1
narf_keypoint_extraction: /usr/local/lib/libvtkImagingCore-8.2.so.1
narf_keypoint_extraction: /usr/local/lib/libvtkRenderingContext2D-8.2.so.1
narf_keypoint_extraction: /usr/local/lib/libvtkRenderingFreeType-8.2.so.1
narf_keypoint_extraction: /usr/local/lib/libvtkfreetype-8.2.so.1
narf_keypoint_extraction: /usr/local/lib/libvtkzlib-8.2.so.1
narf_keypoint_extraction: /usr/local/lib/libvtkRenderingOpenGL2-8.2.so.1
narf_keypoint_extraction: /usr/local/lib/libvtkRenderingCore-8.2.so.1
narf_keypoint_extraction: /usr/local/lib/libvtkCommonColor-8.2.so.1
narf_keypoint_extraction: /usr/local/lib/libvtkFiltersGeometry-8.2.so.1
narf_keypoint_extraction: /usr/local/lib/libvtkFiltersSources-8.2.so.1
narf_keypoint_extraction: /usr/local/lib/libvtkFiltersGeneral-8.2.so.1
narf_keypoint_extraction: /usr/local/lib/libvtkCommonComputationalGeometry-8.2.so.1
narf_keypoint_extraction: /usr/local/lib/libvtkFiltersCore-8.2.so.1
narf_keypoint_extraction: /usr/local/lib/libvtkCommonExecutionModel-8.2.so.1
narf_keypoint_extraction: /usr/local/lib/libvtkCommonDataModel-8.2.so.1
narf_keypoint_extraction: /usr/local/lib/libvtkCommonTransforms-8.2.so.1
narf_keypoint_extraction: /usr/local/lib/libvtkCommonMisc-8.2.so.1
narf_keypoint_extraction: /usr/local/lib/libvtkCommonMath-8.2.so.1
narf_keypoint_extraction: /usr/local/lib/libvtkCommonSystem-8.2.so.1
narf_keypoint_extraction: /usr/local/lib/libvtkCommonCore-8.2.so.1
narf_keypoint_extraction: /usr/local/lib/libvtksys-8.2.so.1
narf_keypoint_extraction: /usr/lib/x86_64-linux-gnu/libSM.so
narf_keypoint_extraction: /usr/lib/x86_64-linux-gnu/libICE.so
narf_keypoint_extraction: /usr/lib/x86_64-linux-gnu/libX11.so
narf_keypoint_extraction: /usr/lib/x86_64-linux-gnu/libXext.so
narf_keypoint_extraction: /usr/lib/x86_64-linux-gnu/libXt.so
narf_keypoint_extraction: /usr/local/lib/libvtkglew-8.2.so.1
narf_keypoint_extraction: /usr/local/lib/libpcl_common.so
narf_keypoint_extraction: /usr/lib/x86_64-linux-gnu/libboost_system.so.1.74.0
narf_keypoint_extraction: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so.1.74.0
narf_keypoint_extraction: /usr/lib/x86_64-linux-gnu/libboost_iostreams.so.1.74.0
narf_keypoint_extraction: /usr/lib/x86_64-linux-gnu/libboost_serialization.so.1.74.0
narf_keypoint_extraction: /usr/lib/x86_64-linux-gnu/libqhull_r.so.8.0.2
narf_keypoint_extraction: /usr/local/lib/librsutils.a
narf_keypoint_extraction: /usr/local/lib/libopencv_imgcodecs.so.4.6.0
narf_keypoint_extraction: /usr/local/lib/libopencv_dnn.so.4.6.0
narf_keypoint_extraction: /usr/local/lib/libopencv_calib3d.so.4.6.0
narf_keypoint_extraction: /usr/local/lib/libopencv_features2d.so.4.6.0
narf_keypoint_extraction: /usr/local/lib/libopencv_flann.so.4.6.0
narf_keypoint_extraction: /usr/local/lib/libopencv_imgproc.so.4.6.0
narf_keypoint_extraction: /usr/local/lib/libopencv_core.so.4.6.0
narf_keypoint_extraction: CMakeFiles/narf_keypoint_extraction.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/duang/Code/pcl/test/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable narf_keypoint_extraction"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/narf_keypoint_extraction.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/narf_keypoint_extraction.dir/build: narf_keypoint_extraction
.PHONY : CMakeFiles/narf_keypoint_extraction.dir/build

CMakeFiles/narf_keypoint_extraction.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/narf_keypoint_extraction.dir/cmake_clean.cmake
.PHONY : CMakeFiles/narf_keypoint_extraction.dir/clean

CMakeFiles/narf_keypoint_extraction.dir/depend:
	cd /home/duang/Code/pcl/test/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/duang/Code/pcl/test /home/duang/Code/pcl/test /home/duang/Code/pcl/test/build /home/duang/Code/pcl/test/build /home/duang/Code/pcl/test/build/CMakeFiles/narf_keypoint_extraction.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/narf_keypoint_extraction.dir/depend

