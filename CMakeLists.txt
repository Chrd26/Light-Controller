cmake_minimum_required(VERSION 3.31)
include(pico_sdk_import.cmake)
pico_sdk_init()
project(lightcontroller VERSION 0.0.1)
add_executable(${PROJECT_NAME} ./src/main.cpp ./src/controller.h ./src/controller.cpp)
target_link_libraries(${PROJECT_NAME} pico_stdlib hardware_adc)
pico_enable_stdio_usb(${PROJECT_NAME} 1)
pico_enable_stdio_uart(${PROJECT_NAME} 0)
pico_add_extra_outputs(${PROJECT_NAME})

# example_auto_set_url(${PROJECT_NAME})
# To see output:  minicom -b 115200 -o -D /dev/tty.usbmodem14301
