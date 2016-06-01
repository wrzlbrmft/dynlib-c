cmake_minimum_required(VERSION 3.5)
project(dynlib)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall")

set(SOURCE_FILES src/main.c)
add_executable(dynlib ${SOURCE_FILES})

set(SOURCE_FILES_FOO src/foo.c)
add_library(foo SHARED ${SOURCE_FILES_FOO})

set(SOURCE_FILES_BAR src/bar.c)
add_library(bar SHARED ${SOURCE_FILES_BAR})
