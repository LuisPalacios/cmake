
# CMake de LuisPa
cmake_minimum_required(VERSION 3.22)

# Definición del proyecto
project(Proyecto VERSION 1.0.0 LANGUAGES C CXX)

# Incluye subdirectorios, las dependencias primero.
add_subdirectory(src)
add_subdirectory(app)
