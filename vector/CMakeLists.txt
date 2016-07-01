cmake_minimum_required(VERSION 3.5)
project(vector)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
        vector_assignment.h
        copy_constructor.h
        main.cpp
        traverse_funcs.h
        vector.h
        vector_bin_search_a.h
        vector_bin_search_b.h
        vector_bin_search_c.h
        vector_bracket.h
        vector_bubble.h
        vector_bubblesort.h
        vector_deduplicate.h
        vector_disordered.h
        vector_expand.h
        vector_fib_search_a.h
        vector_find.h
        vector_insert.h
        vector_merge.h
        vector_mergesort.h
        vector_permute.h
        vector_remove.h
        vector_removeinternal.h
        vector_shrink.h
        vector_traverse.h
        vector_uniquify.h
        vector_unsort.h)

add_executable(vector ${SOURCE_FILES})