# Añado el ejecutable del proyecto
add_executable(${LP_NOMBRE_EJECUTABLE} main.cc)

# Especifico la ubicación de la librería a linkar
target_link_libraries(${LP_NOMBRE_EJECUTABLE} PUBLIC ${LP_NOMBRE_LIBRERIA})
