cmake_minimum_required(VERSION 2.4)

project(hello_world)

include_directories(${PROJECT_SOURCE_DIR}/lol/inlcude)

add_library(applib ${PROJECT_SOURCE_DIR}/lol/lol.cpp)
add_executable(app main.cpp)
target_link_libraries(app applib)