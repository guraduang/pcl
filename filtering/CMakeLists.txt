cmake_minimum_required(VERSION 3.0)
project(filtering)

# 找到所需的库
find_package(PCL REQUIRED)
find_package(realsense2 REQUIRED)
find_package(OpenCV REQUIRED)
find_package(Boost REQUIRED)

# 添加包含目录
include_directories(
    ${PCL_INCLUDE_DIRS}
    ${realsense2_INCLUDE_DIRS}
    ${OpenCV_INCLUDE_DIRS}
    ${Boost_INCLUDE_DIRS}
    ${CMAKE_SOURCE_DIR}
)

# 列出你的源文件
set(SOURCES
    01.cpp
    # 包含你的头文件
    # 添加更多的源文件...
)

# 创建可执行文件并链接所需库
foreach(SOURCE ${SOURCES})
    get_filename_component(EXECUTABLE_NAME ${SOURCE} NAME_WE)
    add_executable(${EXECUTABLE_NAME} ${SOURCE})
    target_link_libraries(${EXECUTABLE_NAME}
        ${PCL_LIBRARIES}
        ${realsense2_LIBRARY}
        ${OpenCV_LIBS}
        ${Boost_LIBRARIES}
    )
endforeach()

SET(CMAKE_BUILD_TYPE "Debug")
SET(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g -ggdb")
SET(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -O3 -Wall")
