cmake_minimum_required(VERSION 3.5)
project(dynlib)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall")

set(SOURCE_FILES src/main.c)
add_executable(dynlib ${SOURCE_FILES})
