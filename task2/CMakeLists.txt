cmake_minimum_required(VERSION 3.10)

project(C)

set(SOURCE_EXE ${C_SOURCE_DIR}/C/main.cpp ${C_SOURCE_DIR}/C/main.h ${C_SOURCE_DIR}/A/index.h)
set(SOURCE_EXE_TESTS ${PROJECT_SOURCE_DIR}/C/main_test.cpp)

find_package(GTest REQUIRED)
find_package(Threads REQUIRED)

include_directories(${C_SOURCE_DIR})
include_directories(${GTEST_INCLUDE_DIRS})

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${C_SOURCE_DIR}/bin)

add_executable(C ${SOURCE_EXE})

target_link_libraries(C lib)
add_subdirectory(B)
add_subdirectory(C)

enable_testing()

add_test(CTest ${C_SOURCE_DIR}/bin/CTest)