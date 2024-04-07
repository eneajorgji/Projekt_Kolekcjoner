#include "DataBase.h"
#include <algorithm>
#include <iostream>

void DataBase::createItemType(const std::string& name, const std::vector<std::string>& attributes) {
    types.emplace_back(name, attributes);
}

void DataBase::addItem(const ItemType& type, const std::map<std::string, std::string>& customAttributes, const std::string& status) {
    items.emplace_back(type, customAttributes, status);
}

std::vector<CollectionItem> DataBase::findItems(const std::string& typeName) const {
    std::vector<CollectionItem> foundItems;
    for (const auto& item : items) {
        if (item.type.name == typeName) {
            foundItems.push_back(item);
        }
    }
    return foundItems;
}

bool DataBase::editItem(const std::string& typeName, const std::string& key, const std::string& keyValue, const std::map<std::string, std::string>& newAttributes) {
    for (auto& item : items) {
        try {
            if (item.type.name == typeName && item.customAttributes.at(key) == keyValue) {
                item.customAttributes = newAttributes;
                return true;
            }
        }
        catch (const std::out_of_range&) {
            continue;
        }
    }
    return false;
}

const ItemType* DataBase::findItemTypeByName(const std::string& typeName) const {
    auto it = std::find_if(types.begin(), types.end(),
        [&typeName](const ItemType& type) { return type.name == typeName; });
    if (it != types.end()) {
        return &(*it);
    }
    else {
        return nullptr;
    }
}

bool DataBase::removeItem(const std::string& typeName, const std::string& key, const std::string& keyValue) {
    auto it = std::remove_if(items.begin(), items.end(), [&](const CollectionItem& item) {
        try {
            return item.type.name == typeName && item.customAttributes.at(key) == keyValue;
        }
        catch (const std::out_of_range&) {
            return false;
        }
        });

    if (it != items.end()) {
        items.erase(it, items.end());
        return true;
    }
    return false;
}

void DataBase::listTypes() const {
    for (const auto& type : types) {
        std::cout << "Type: " << type.name << std::endl;
        for (const auto& attr : type.attributes) {
            std::cout << "  Attribute: " << attr << std::endl;
        }
    }
}

void DataBase::displayAllItems() const {
    for (const auto& item : items) {
        std::cout << "Item Type: " << item.type.name << "\nStatus: " << item.status << "\nAttributes:\n";
        for (const auto& attr : item.customAttributes) {
            std::cout << "  " << attr.first << ": " << attr.second << '\n';
        }
        std::cout << "-------------------------\n";
    }
}