#
# Fuentes de mi libreria
#

# ----------------------------------------------------------
# Programas en C/C++
set(LP_LIBRERIA_FUENTES_CC
    "my_lib.cc")
# Ficheros .h
set(LP_LIBRERIA_FUENTES_H
    "my_lib.h")
# Includes de librerías o añadidos externos
set(LP_LIBRERIA_INCLUDES
    "./"
    "${CMAKE_BINARY_DIR}/config_files/include")
# Librerías o añadidos externos
# Buscar la naming convention en los CMakeLists.txt de cada
# librería externa que haya incluido con FetchContent()
# en mi CMakeLists.txt raiz.
# Naming convention -> project_name::library_name
set(LP_LIBRERIA_LIBS
    "nlohmann_json::nlohmann_json"
    "fmt::fmt"
    "spdlog::spdlog"
    "cxxopts::cxxopts")

# ----------------------------------------------------------
# Indicamos que estamos añadiendo una Librería
add_library(${LP_NOMBRE_LIBRERIA} STATIC
    ${LP_LIBRERIA_FUENTES_CC}
    ${LP_LIBRERIA_FUENTES_H})

# Mi librería usa los siguientes INCLUDES.
target_include_directories(${LP_NOMBRE_LIBRERIA} PUBLIC
    ${LP_LIBRERIA_INCLUDES})

# Mi librería linka los siguientes proyectos:
target_link_libraries(${LP_NOMBRE_LIBRERIA} PUBLIC
    ${LP_LIBRERIA_LIBS})

# ----------------------------------------------------------
# Definido en el CMakeLists.txt raiz.
# Si queremos habilitar WARNINGs especiales...
if (ENABLE_WARNINGS)
    target_set_warnings(
        ${LP_NOMBRE_LIBRERIA}
        ${ENABLE_WARNINGS}
        ${ENABLE_WARNINGS_AS_ERRORS})
endif()

# Si queremos habilitar LINK TIME OPTIIMIZATION especiales...
if (ENABLE_LTO)
    habilitar_LTO_para_el_Target(
        ${LP_NOMBRE_LIBRERIA}
        ${ENABLE_LTO})
endif()
