#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <limits>

#include "DataBase.h"

using namespace std;

#pragma once

class CollectionItem {
public:
    ItemType type;
    std::map<std::string, std::string> customAttributes;
    std::string status;

    CollectionItem(const ItemType& type, const std::map<std::string, std::string>& customAttributes, const std::string& status)
        : type(type), customAttributes(customAttributes), status(status) {}
};

bool operator==(const CollectionItem& lhs, const CollectionItem& rhs) {
    return lhs.type.name == rhs.type.name && lhs.customAttributes == rhs.customAttributes && lhs.status == rhs.status;
}

