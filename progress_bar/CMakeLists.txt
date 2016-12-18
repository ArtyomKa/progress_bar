cmake_minimum_required(VERSION 3.4)
project(progress_bar)


file(GLOB_RECURSE SOURCES
     src *.cpp
     include/progress_bar *.h)

#message(${SOURCES})

add_library(progress_bar ${SOURCES})
include_directories(./include)
#target_include_directories(progress_bar PUBLIC ./include/progress_bar)