cmake_minimum_required(VERSION 3.7)
project(testing)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp temp_converter.hpp geometry_test.h)
add_executable(testing ${SOURCE_FILES})