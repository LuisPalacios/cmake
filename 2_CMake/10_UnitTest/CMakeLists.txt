
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

# Habilito los Unit testing
option(ENABLE_TESTING "Enable a Unit Testing Build" ON)

# Variables LuisPa
set(LP_NOMBRE_LIBRERIA Libreria)
set(LP_NOMBRE_EJECUTABLE Ejecutable)

## Librerias externas
##
# METODO (1)
# ============
# Vale para repositorios cmake y repositorios NO cmake. Se recomienda usar cuando
# el respositorio NO es cmake.
# Creo un módulo cmake bajo ./cmake
set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake/")
# incluye el fichero cmake/AddGitSubmodule.cmake
include(AddGitSubmodule)
# Ejecuto las funciones definidas en los ficheros .cmake
# Lo he comentaado porque lo cargo usando el método 2.
# add_git_submodule(external/json)

# METODO (2)
# ============
# Este método es el recomendado cuando necesito incluir una librería
# que está en un repositorio de GitHub o GitLab y está diseñada con `cmake`
#
#   nlohmann_jason es el project name que encontramos en el CMakeLists.txt
#   FetchContent_Declare() hace el clone del repositorio
#   FetchContent_MakeAvailable() carga este repositorio en nuestro proyecto cmake
include(FetchContent)
#
FetchContent_Declare(
    nlohmann_jason
    GIT_REPOSITORY https://github.com/nlohmann/json
    GIT_TAG v3.11.3
    GIT_SHALLOW TRUE)
FetchContent_MakeAvailable(nlohmann_jason)

FetchContent_Declare(
    fmt
    GIT_REPOSITORY https://github.com/fmtlib/fmt
    GIT_TAG 10.2.1
    GIT_SHALLOW TRUE)
FetchContent_MakeAvailable(fmt)

FetchContent_Declare(
    spdlog
    GIT_REPOSITORY https://github.com/gabime/spdlog
    GIT_TAG v1.13.0
    GIT_SHALLOW TRUE)
FetchContent_MakeAvailable(spdlog)

FetchContent_Declare(
    cxxopts
    GIT_REPOSITORY https://github.com/jarro2783/cxxopts
    GIT_TAG v3.2.0
    GIT_SHALLOW TRUE)
FetchContent_MakeAvailable(cxxopts)

FetchContent_Declare(
    Catch2
    GIT_REPOSITORY https://github.com/catchorg/Catch2
    GIT_TAG v2.13.9
    GIT_SHALLOW TRUE)
FetchContent_MakeAvailable(Catch2)

# Include de Docs para poder subir a GitHub lo generado por Docxygen
# incluye el fichero cmake/Docs.cmake
include(Docs)

# Incluye directorios con los fuentes
add_subdirectory(config)
add_subdirectory(external)
add_subdirectory(src)
add_subdirectory(app)
add_subdirectory(tests)
