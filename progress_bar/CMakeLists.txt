cmake_minimum_required(VERSION 3.4)
project(progress_bar)

file(GLOB_RECURSE SOURCES
     src *.cpp
     include/progress_bar *.h)

add_library(progress_bar ${SOURCES})
