cmake_minimum_required(VERSION 3.5)
project(queen)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
        main.cpp
        placequeens.cpp
        queen.h
        queen_stack.h)

add_executable(queen ${SOURCE_FILES})