#include "itemType.h"
#include <iostream>

using namespace std;

// Constructor implementation.
ItemType::ItemType(const std::string& name, const std::vector<std::string>& attributes)
    : name(name), attributes(attributes) {}

// 
void ItemType::display() const {
    std::cout << "Type: " << name << std::endl;
    
    for (const auto& attr : attributes) {
        std::cout << "  Attribute: " << attr << std::endl;
    }
}

//
std::string ItemType::getDescription() const {
    std::string description = "ItemType: " + name + "; Attributes: ";
    
    for (const auto& attr : attributes) {
        description += attr + ", ";
    }
    
    return description.substr(0, description.size() - 2);
};