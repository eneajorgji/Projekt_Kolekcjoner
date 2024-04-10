#include "AuditTrail.h"
#include <iostream>

static void logChange(const std::string& action, const std::string& details) {
    std::cout << "AuditTrail - " << action << ": " << details << std::endl;
};