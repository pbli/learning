cmake_minimum_required(VERSION 3.0.0)
project(TEST)

set(CMAKE_CXX_STANDARD 17) 
set(SOURCES  main.cpp solution.cpp)

add_executable(${PROJECT_NAME} ${SOURCES})
