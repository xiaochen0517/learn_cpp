cmake_minimum_required(VERSION 3.20)
project(4_learn_cmake)

set(CMAKE_CXX_STANDARD 11)

add_executable(4_learn_cmake main.cpp)

find_package(fmt CONFIG REQUIRED)
target_link_libraries(4_learn_cmake PRIVATE fmt::fmt)

#set(MY_FLAG OFF)
#
#if ("${MY_FLAG}")
#    message("TRUE")
#else ()
#    message("FALSE")
#endif ()
#
#message("PATH: $ENV{PATH}")

# 设置一些变量
set(PROJECT_NAME "Learn CMake Project")
set(PROJECT_VERSION "1.0.0")
#set(HAVE_FEATURE_X 1)

# 配置文件生成
configure_file(
        "${CMAKE_CURRENT_SOURCE_DIR}/include/config.h.in"
        "${CMAKE_CURRENT_BINARY_DIR}/include/config.h"
)

# 包含生成的配置文件
target_include_directories(4_learn_cmake PRIVATE "${CMAKE_CURRENT_BINARY_DIR}")
