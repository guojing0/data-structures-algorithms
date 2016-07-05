cmake_minimum_required(VERSION 3.5)
project(lispy-calc)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
        main.cpp lispy-calc.cpp lispy-calc.h readnum.cpp)

add_executable(lispy-calc ${SOURCE_FILES})