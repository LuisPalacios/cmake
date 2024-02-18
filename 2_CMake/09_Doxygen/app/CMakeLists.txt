# Fuentes de mi libreria
set(LP_FUENTES_APP_CC
    "main.cc")

set(LP_FUENTES_APP_H
    "main.h")

# Añado el ejecutable del proyecto
add_executable(${LP_NOMBRE_EJECUTABLE}
    ${LP_FUENTES_APP_CC}
    ${LP_FUENTES_APP_H})

# Especifico la ubicación de la librería a linkar
target_link_libraries(${LP_NOMBRE_EJECUTABLE} PUBLIC
    ${LP_NOMBRE_LIBRERIA}
    nlohmann_json)
