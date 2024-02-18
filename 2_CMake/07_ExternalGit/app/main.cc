#include <iostream>

#include "config.hpp"
#include "main.h"
#include "my_lib.h"

#include <nlohmann/json.hpp>

int main() {

    print_hello_world();
    std::cout << "Hola mundo! yo soy main.cc" << std::endl;
    std::cout << "Proyecto: " << project_name << " v" << project_version << std::endl;

    std::cout << "Nlohmann Json version "
        << NLOHMANN_JSON_VERSION_MAJOR << "."
        << NLOHMANN_JSON_VERSION_MINOR << "."
        << NLOHMANN_JSON_VERSION_PATCH << "." << std::endl;

    return 0;
}
