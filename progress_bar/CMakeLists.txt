cmake_minimum_required(VERSION 3.2)
project(progress_bar)


file(GLOB_RECURSE SOURCES
     src *.cpp)


add_library(progress_bar ${SOURCES})


target_include_directories(progress_bar PUBLIC ./include)