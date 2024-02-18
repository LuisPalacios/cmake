#include <iostream>

#include "my_lib.h"
#include <nlohmann/json.hpp>

/**
 * @brief Prints out hello world and tests json
 *
 */

void print_hello_world() {
    std::cout << "** LIB  - my_lib.cc ** Hola mundo!" << std::endl;

    std::cout << "Desde mi librería ... Nlohmann Json version "
    << NLOHMANN_JSON_VERSION_MAJOR << "."
    << NLOHMANN_JSON_VERSION_MINOR << "."
    << NLOHMANN_JSON_VERSION_PATCH << "." << std::endl;

}

/**
 * @brief Devolver el valor Factorial de un número
 *
 * Voy a usar esta fucnión para hacer pruebas de Unit testing
 *
 * @param number
 * @return
 */
std::uint32_t factorial( std::uint32_t number ) {
    return number <= 1 ? number : factorial(number-1)*number;
}
