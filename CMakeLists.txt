cmake_minimum_required(VERSION 3.10)
project(cccc C)
include(${CMAKE_SOURCE_DIR}/conan.cmake)

conan_cmake_run(REQUIRES catch2/2.5.0@bincrafters/stable
                BASIC_SETUP
                BUILD missing)

set(CMAKE_C_STANDARD 11)

add_executable(first src/main.c)
target_link_libraries(first ${CONAN_LIBS})
