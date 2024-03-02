cmake_minimum_required(VERSION 3.27)
project(complier)

set(CMAKE_CXX_STANDARD 17)

add_executable(complier main.cpp
        LexAnalyzer.cpp
        LexAnalyzer.h)
