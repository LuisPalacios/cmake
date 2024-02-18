
# CMake de LuisPa
cmake_minimum_required(VERSION 3.22)

# En este ejemplo mostramos cómo conectar con un submodulo git
# y usamos el proyecto
# cd external
# git submodule add https://github.com/nlohmann/json

# Definición del proyecto
project(Proyecto VERSION 1.0.7 LANGUAGES C CXX)

# Variables generales importantes para seguir el Standard (en este caso 11)
set(CMAKE_CXX_STANDARD          11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS        OFF)

# Variables LuisPa
set(LP_NOMBRE_LIBRERIA Libreria)
set(LP_NOMBRE_EJECUTABLE Ejecutable)

# Opciones
#option(COMPILA_EJECUTABLE "Whether to compile the executable" OFF)
#if ( COMPILA_EJECUTABLE )
#    add_subdirectory(app)
#else()
#    message("Sin ejecutable")
#endif()

# Incluye directorios con los fuentes
add_subdirectory(config)
add_subdirectory(src)
add_subdirectory(app)
