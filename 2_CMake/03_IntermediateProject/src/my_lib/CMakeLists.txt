
# Indicamos que estamos añadiendo una Librería
add_library(Libreria STATIC my_lib.cc)

# Dónde encontrar las cabeceras
target_include_directories(Libreria PUBLIC "./")
