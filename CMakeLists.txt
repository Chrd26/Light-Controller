cmake_minimum_required(VERSION 3.31)
include(pico_sdk_import.cmake)
pico_sdk_init()
project(learning VERSION 0.0.1)
add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} pico_stdlib)
pico_add_extra_outputs(${PROJECT_NAME})

