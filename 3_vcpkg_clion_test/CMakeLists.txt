cmake_minimum_required(VERSION 3.30)
project(3_vcpkg_clion_test)

set(CMAKE_CXX_STANDARD 11)

add_executable(3_vcpkg_clion_test main.cpp)

find_package(fmt CONFIG REQUIRED)
target_link_libraries(3_vcpkg_clion_test PRIVATE fmt::fmt)
