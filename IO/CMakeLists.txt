cmake_minimum_required(VERSION 3.0)
project(IO)

# 找到所需的库
find_package(PCL REQUIRED)
find_package(realsense2 REQUIRED)
find_package(OpenCV REQUIRED)
# 添加包含目录
include_directories(${PCL_INCLUDE_DIRS})
include_directories(${realsense2_INCLUDE_DIRS})
include_directories(${CMAKE_SOURCE_DIR})
include_directories(${OpenCV_INCLUDE_DIRS})

# 添加链接库目录
#ink_directories(${PCL_LIBRARY_DIRS})

# 添加编译选项
#add_definitions(${PCL_DEFINITIONS})

# 列出你的源文件
set(SOURCES
    read_pcd.cpp
    #write_pcd.cpp
    # 添加更多的源文件...
)

# 创建可执行文件并链接所需库
foreach(SOURCE ${SOURCES})
    get_filename_component(EXECUTABLE_NAME ${SOURCE} NAME_WE)
    add_executable(${EXECUTABLE_NAME} ${SOURCE})
    target_link_libraries(${EXECUTABLE_NAME} ${PCL_LIBRARIES} ${realsense2_LIBRARY} ${OpenCV_LIBS})
endforeach()


SET(CMAKE_BUILD_TYPE "Debug")
SET(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g -ggdb")
SET(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -O3 -Wall")
# 安装所有可执行文件到 bin 目录
#install(TARGETS userealsense test CentroidPoint RUNTIME DESTINATION bin)

