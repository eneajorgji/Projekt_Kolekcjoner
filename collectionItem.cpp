#include "CollectionItem.h"


// Constructor implementation.
CollectionItem::CollectionItem(const ItemType& type, const std::map<std::string, std::string>& customAttributes, const std::string& status)
    : type(type), customAttributes(customAttributes), status(status) {}

// Operator== implementation.
bool operator==(const CollectionItem& lhs, const CollectionItem& rhs) {
    return lhs.type.name == rhs.type.name && lhs.customAttributes == rhs.customAttributes && lhs.status == rhs.status;
}

// 
void CollectionItem::display() const {
    std::cout << "Item Type: " << type.name << "\nStatus: " << status << "\nAttributes:\n";
    
    for (const auto& attr : customAttributes) {
        std::cout << "  " << attr.first << ": " << attr.second << '\n';
    }
}

//
std::string CollectionItem::getDescription() const {
    std::string description = "CollectionItem of Type: " + type.name + "; Status: " + status + "; Attributes: ";

    for (const auto& attr : customAttributes) {
        description += attr.first + ": " + attr.second + ", ";
    }

    return description.substr(0, description.size() - 2);
};