#include <iostream>

#include "my_lib.h"
#include <nlohmann/json.hpp>

void print_hello_world() {
    std::cout << "** LIB  - my_lib.cc ** Hola mundo!" << std::endl;

    std::cout << "Desde mi librería ... Nlohmann Json version "
    << NLOHMANN_JSON_VERSION_MAJOR << "."
    << NLOHMANN_JSON_VERSION_MINOR << "."
    << NLOHMANN_JSON_VERSION_PATCH << "." << std::endl;

}
