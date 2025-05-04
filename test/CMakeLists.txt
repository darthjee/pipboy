cmake_minimum_required(VERSION 3.10)
project(PipBoyTests CXX)

# Activate C++15
set(CMAKE_CXX_STANDARD 15)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add subdirectory
add_subdirectory(lib)
add_subdirectory(test)

# Add executable
add_executable(tests test.cpp)

gtest_discover_tests(tests)
