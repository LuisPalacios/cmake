
# CMake de LuisPa

cmake_minimum_required(VERSION 3.22)

project(Ptoyecto VERSION 1.0.0 LANGUAGES C CXX)

add_library(Libreria STATIC my_lib.cc)

add_executable(ejecutable main.cc)

target_link_libraries(ejecutable PUBLIC Libreria)
