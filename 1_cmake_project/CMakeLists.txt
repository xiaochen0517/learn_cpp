cmake_minimum_required(VERSION 3.12)
project(CMakeTestProject)

# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(CMakeTestProject main.cpp)

find_package(Threads REQUIRED)
target_link_libraries(CMakeTestProject PRIVATE Threads::Threads)