cmake_minimum_required(VERSION 3.29)
project(Mathematical_models)

set(CMAKE_CXX_STANDARD 20)

add_executable(Mathematical_models main.cpp
        bin_pricer.cpp
        bin_pricer_head.h)
