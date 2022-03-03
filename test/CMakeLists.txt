cmake_minimum_required(VERSION 3.8)

project(test)

add_executable(test test.cpp)
target_compile_features(test PRIVATE cxx_std_17)

add_library(export_forward MODULE export_forward.c)
target_include_directories(export_forward PRIVATE ../include)