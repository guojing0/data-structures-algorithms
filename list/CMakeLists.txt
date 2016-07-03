cmake_minimum_required(VERSION 3.5)
project(list)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
        main.cpp
        list_implement.h
        list.h
        list_bracket.h
        list_constr_by_copying.h
        list_copynodes.h
        list_deduplicate.h
        list_destructor.h
        list_find.h
        list_init.h
        list_insert.h
        listNode_insertaspred.h
        listNode_insertassucc.h
        list_insertionsort.h
        list_mergesort.h
        list_remove.h
        list_search.h
        list_selectionsort.h
        list_traverse.h
        list_uniquify.h
        listNode.h
        listNode_implement.h)

add_executable(list ${SOURCE_FILES})