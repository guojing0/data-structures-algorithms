cmake_minimum_required(VERSION 3.5)
project(DSA)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

add_subdirectory(vector)
add_subdirectory(stack)
add_subdirectory(list)
add_subdirectory(queen)
add_subdirectory(laby)
add_subdirectory(bintree)

add_subdirectory(lispy-calc)

set(SOURCE_FILES main.cpp)
add_executable(DSA ${SOURCE_FILES})