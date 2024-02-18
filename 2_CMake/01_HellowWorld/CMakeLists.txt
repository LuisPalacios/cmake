
# 0. crear fuente y CMakeLists.txt
# 1. mkdir build
# 2. cd build
# 3. cmake ..  (le decimos a cmake donde está el CMakeLists.txt
# 4. cmake --build . (equivalente a hacer un make)
# 5. ./Executable

cmake_minimum_required(VERSION 3.22)

project(CppCMakeStudy VERSION 1.0.0 LANGUAGES C CXX)

add_executable(Executable main.cc)
