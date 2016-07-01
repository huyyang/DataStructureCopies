cmake_minimum_required(VERSION 3.5)
project(CopyVariations)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    clist.h
    dlist.h
    list.h
    main.cpp
    supplied.o)

add_executable(CopyVariations ${SOURCE_FILES})