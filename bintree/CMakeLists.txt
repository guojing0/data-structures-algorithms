cmake_minimum_required(VERSION 3.5)
project(bintree)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
        main.cpp
        binnode.h
        binnode_implement.h
        binnode_macro.h
        binnode_insert.h
        bintree.h)

add_executable(bintree ${SOURCE_FILES})