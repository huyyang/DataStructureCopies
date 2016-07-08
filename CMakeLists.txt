cmake_minimum_required(VERSION 3.5)
project(CopyVariations)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    list.h
    main.cpp
    supplied.o list_copy.cpp)

add_executable(CopyVariations ${SOURCE_FILES} list_copy.cpp)