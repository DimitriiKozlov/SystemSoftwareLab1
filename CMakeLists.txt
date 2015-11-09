cmake_minimum_required(VERSION 3.3)
project(SPZ)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp allocator.cpp allocator.h)
add_executable(SPZ ${SOURCE_FILES})