# Fuentes de mi libreria
set(LP_FUENTES_LIBRERIA_CC
    "my_lib.cc")

set(LP_FUENTES_LIBRERIA_H
    "my_lib.h")

# Indicamos que estamos añadiendo una Librería
add_library(${LP_NOMBRE_LIBRERIA} STATIC
    ${LP_FUENTES_LIBRERIA_CC}
    ${LP_FUENTES_LIBRERIA_H})

# Dónde encontrar los ficheros include (.h)
target_include_directories(${LP_NOMBRE_LIBRERIA} PUBLIC
    "./"
    "${CMAKE_BINARY_DIR}/config_files/include"
    )
