#
# CMake para testear mi librería.
# Aquí creo un ejecutable que solo uso para testear mi librería
#
if ( ENABLE_TESTING)
    set(TEST_MAIN "unit_tests")
    set(TEST_SOURCES "main.cc")
    set(TEST_INCLUDES "./")

    add_executable(${TEST_MAIN} ${TEST_SOURCES})

    target_include_directories(${TEST_MAIN} PUBLIC ${TEST_INCLUDES})

    target_link_libraries(${TEST_MAIN} PUBLIC ${LP_NOMBRE_LIBRERIA} Catch2::Catch2)
endif()
