cmake_minimum_required(VERSION 3.5)
project(DSA)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

add_subdirectory(vector)

set(SOURCE_FILES main.cpp)
add_executable(DSA ${SOURCE_FILES})