cmake_minimum_required(VERSION 3.10)
project(PipBoyTests CXX)

# Activate C++15
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add executable
add_executable(PipBoyTest tests/test.cpp)
