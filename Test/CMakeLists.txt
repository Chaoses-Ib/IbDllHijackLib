cmake_minimum_required(VERSION 3.8)

project(test)

add_executable(test test.cpp)
add_library(export_forward MODULE export_forward.c)

target_compile_features(test PRIVATE cxx_std_17)