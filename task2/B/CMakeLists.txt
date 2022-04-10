cmake_minimum_required(VERSION 3.10)

project(lib)

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${lib_SOURCE_DIR}/../lib)
set(CMAKE_LIBRARY_OUTPUT_NAME B)

set (SOURCES_LIB lib.cpp)

add_library(lib SHARED lib.cpp)