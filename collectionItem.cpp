#include "collectionItem.h"


// Constructor implementation.
CollectionItem::CollectionItem(const ItemType& type, const std::map<std::string, std::string>& customAttributes, const std::string& status)
    : type(type), customAttributes(customAttributes), status(status) {}

// Operator== implementation.
bool operator==(const CollectionItem& lhs, const CollectionItem& rhs) {
    return lhs.type.name == rhs.type.name && lhs.customAttributes == rhs.customAttributes && lhs.status == rhs.status;
}