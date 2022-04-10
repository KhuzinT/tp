cmake_minimum_required(VERSION 3.10)

project(CTest)

find_package(GTest REQUIRED)
find_package(Threads REQUIRED)

include_directories(${GTEST_INCLUDE_DIRS})

add_executable(CTest main_test.cpp unit_test.cpp)
target_link_libraries(CTest ${GTEST_LIBRARIES} Threads::Threads lib)
