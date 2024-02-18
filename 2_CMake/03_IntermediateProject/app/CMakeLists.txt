# Añado el ejecutable del proyecto
add_executable(ejecutable main.cc)

# Especifico la ubicación de la librería a linkar
target_link_libraries(ejecutable PUBLIC Libreria)
