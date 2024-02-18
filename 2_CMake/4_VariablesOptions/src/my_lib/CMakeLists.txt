
# Indicamos que estamos añadiendo una Librería
add_library(${LP_NOMBRE_LIBRERIA} STATIC my_lib.cc)

# Dónde encontrar las cabeceras
target_include_directories(${LP_NOMBRE_LIBRERIA} PUBLIC "./")
