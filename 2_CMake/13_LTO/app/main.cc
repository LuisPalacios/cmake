#include <iostream>

#include "main.h"
#include "config.hpp"
#include "my_lib.h"

#include <cxxopts.hpp>
#include <nlohmann/json.hpp>
#include <fmt/format.h>
#include <spdlog/spdlog.h>

int main() {

    // Creo una variable que no uso para que salga un WARNING !!
    // Configurado en Warnings.cmake
    // int i;

    // Creo una variable que uso mal paraque salten los SANITIZERS!!
    // Configurado en Sanitizers.cmake
    // int x[2] = {10, 20};
    // std::cout << "** Valores de x[0]=" << x[0] << " x[1]=" << x[1] << std::endl;
    // x[2]=2;   // ESTO DEBERÍA PETAR !!!

    std::cout << std::endl;

    print_hello_world();

    std::cout << "** MAIN - main.cc   ** Hola mundo!" << std::endl;
    std::cout << "Proyecto          : " << project_name << " v" << project_version << std::endl;
    std::cout << "Major/minor/patch : " << project_version_major << "." << project_version_minor << "." << project_version_patch << std::endl;

    std::cout << "CXXOPTS Version "
        << CXXOPTS__VERSION_MAJOR << "."
        << CXXOPTS__VERSION_MINOR << "."
        << CXXOPTS__VERSION_PATCH << "." << std::endl;

    std::cout << "Nlohmann Json version "
        << NLOHMANN_JSON_VERSION_MAJOR << "."
        << NLOHMANN_JSON_VERSION_MINOR << "."
        << NLOHMANN_JSON_VERSION_PATCH << "." << std::endl;

    std::cout << "FMT Version "
        << FMT_VERSION << std::endl;

    std::cout << "SPDLOG Version "
        << SPDLOG_VER_MAJOR << "."
        << SPDLOG_VER_MINOR << "."
        << SPDLOG_VER_PATCH << "." << std::endl;

    std::cout << std::endl;

    return 0;
}
