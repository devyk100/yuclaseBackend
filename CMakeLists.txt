cmake_minimum_required(VERSION 3.10)
project(yuclase_backend VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Include directories
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

# Add the subdirectory containing the source files
add_subdirectory(src)
