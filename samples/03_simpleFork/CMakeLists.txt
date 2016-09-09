cmake_minimum_required(VERSION 2.8)
project(03_simpleFork)

#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
add_definitions(-std=c99)

set(SOURCE_FILES main.c)
add_executable(03_simpleFork ${SOURCE_FILES})