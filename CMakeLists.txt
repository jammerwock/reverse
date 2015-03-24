cmake_minimum_required(VERSION 2.8.4)
project(reverse)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/build")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_CXX_LINK_EXECUTABLE "${CMAKE_CXX_LINK_EXECUTABLE} -Wall")
set(SOURCE_FILES main.cpp)
add_executable(reverse ${SOURCE_FILES})