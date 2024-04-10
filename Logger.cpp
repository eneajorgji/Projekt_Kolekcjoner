#include "Logger.h"
#include <iostream>


static void log(const std::string& message) {
    std::cout << "[LOG]: " << message << std::endl;
}


