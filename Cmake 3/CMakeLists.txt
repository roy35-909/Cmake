cmake_minimum_required(VERSION 3.10)

# Set the project name and specify the C++ standard to use
project(matrix_operations LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 14)

# Find the Eigen3 library and include its headers
find_package(Eigen3 3.3 REQUIRED)
include_directories(${EIGEN3_INCLUDE_DIRS})

# Add the source files for the MatrixOperation class
add_library(matrix_operation SHARED 
    include/matrix_operations.hpp
    src/matrix_operations.cpp
)

# Set the compiler flags
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -pedantic")

# Link the required libraries
target_link_libraries(matrix_operation
    Eigen3::Eigen
)

# Add the main executable
add_executable(matrix_operations
    src/main.cpp
)

# Link the executable with the MatrixOperation class
target_link_libraries(matrix_operations
    matrix_operation
)
