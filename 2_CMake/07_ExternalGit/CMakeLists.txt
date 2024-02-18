
# CMake de LuisPa
cmake_minimum_required(VERSION 3.22)

# En este ejemplo mostramos cómo conectar con un submodulo git
#
# luis:7_ExternalGit (main) % mkdir external
# luis:7_ExternalGit (main) % git submodule add https://github.com/nlohmann/json external/json
#

# Definición del proyecto
project(Proyecto VERSION 1.0.7 LANGUAGES C CXX)

# Variables generales importantes para seguir el Standard (en este caso 11)
set(CMAKE_CXX_STANDARD          11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS        OFF)

# Variables LuisPa
set(LP_NOMBRE_LIBRERIA Libreria)
set(LP_NOMBRE_EJECUTABLE Ejecutable)

# Incluyo los módulos cmake bajo ./cmake
set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake/")
include(AddGitSubmodule)

# Ejecuto las funciones definidas en los ficheros .cmake
add_git_submodule(external/json)

# Incluye directorios con los fuentes
add_subdirectory(config)
add_subdirectory(external)
add_subdirectory(src)
add_subdirectory(app)
