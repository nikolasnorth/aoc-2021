cmake_minimum_required(VERSION 3.21)
project(aoc_2021)

set(CMAKE_CXX_STANDARD 20)

set(SOURCE src/main.cpp src/util/util.cpp src/util/util.h src/day2/day2.cpp src/day2/day2.h)

add_executable(aoc_2021 ${SOURCE})
