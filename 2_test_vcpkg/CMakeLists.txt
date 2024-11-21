# CMakeList.txt : CMake project for 2_test_vcpkg, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.10)

project ("2_test_vcpkg")

find_package(fmt CONFIG REQUIRED)

add_executable (2_test_vcpkg "2_test_vcpkg.cpp" "2_test_vcpkg.h")

target_link_libraries(2_test_vcpkg PRIVATE fmt::fmt)
