cmake_minimum_required(VERSION 3.10)

# Set the project name
project(my_project)


# Add include directories
include_directories(${PROJECT_SOURCE_DIR}/include)

# Add the executable
add_executable(${PROJECT_NAME} src/main.cpp)