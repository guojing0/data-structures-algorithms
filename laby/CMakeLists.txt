cmake_minimum_required(VERSION 3.5)
project(laby)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
        main.cpp
        cell.h
        neighbor.h
        cell_advance.h)

add_executable(laby ${SOURCE_FILES})