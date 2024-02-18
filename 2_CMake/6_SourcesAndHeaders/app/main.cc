#include <iostream>

#include "config.hpp"
#include "main.h"
#include "my_lib.h"

int main() {

    print_hello_world();
    std::cout << "Hola mundo! yo soy main.cc" << std::endl;
    std::cout << "Proyecto: " << project_name << " v" << project_version << std::endl;

    return 0;
}
