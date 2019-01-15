cmake_minimum_required(VERSION 3.10)
project(cccc CXX)
include(${CMAKE_SOURCE_DIR}/conan.cmake)

conan_cmake_run(REQUIRES catch2/2.5.0@bincrafters/stable
                BASIC_SETUP
                BUILD missing)

set(CMAKE_CPP_STANDARD 17)

add_executable(first src/main.cpp)
target_link_libraries(first ${CONAN_LIBS})
