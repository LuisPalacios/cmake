#
# Fichero cmake de apoyo
#

# Objetivo: Poder generar documentación HTML con Doxygen
#
# Lo siguiente se va a ejecutar nada más borrar el cache y reconfigurar
#
find_package(Doxygen)

if (DOXYGEN_FOUND)
    add_custom_target(docs
        COMMAND ${DOXYGEN_EXECUTABLE}
        WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}/docs
        COMMENT "Generating HTML documentation with Doxygen"
    )
endif()
