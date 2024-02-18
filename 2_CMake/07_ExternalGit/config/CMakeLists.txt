# Indicamos qué queremos hacer con los ficheros de configuración
configure_file(
    "config.hpp.in"
    "${CMAKE_BINARY_DIR}/config_files/include/config.hpp" ESCAPE_QUOTES
)
