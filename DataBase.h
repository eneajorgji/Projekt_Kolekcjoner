#pragma once

#ifndef DATABASE_H
#define DATABASE_H

#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <limits>

#include "CollectionItem.h"
//#include "ItemType.h"





//class DataBase
//{
//public:
//	vector<ItemType> types;
//	vector<CollectionItem> items;
//
//public:
//	//punkt 1. -> {wszystkie te dane dodaje to wektora}
//	void createItemType(const std::string& name, const std::vector<std::string>& attributes) { 
//		types.emplace_back(name, attributes); 
//	} 
//	
//	void addItem(const ItemType& type, const std::map<std::string, std::string>& customAttributes, const std::string& status) {
//		items.emplace_back(type, customAttributes, status);
//	}
//	
//	std::vector<CollectionItem> findItems(const std::string& typeName) const {
//		std::vector<CollectionItem> foundItems;
//		for (const auto& item : items) {
//			if (item.type.name == typeName) {
//				foundItems.push_back(item);
//			}
//		}
//		return foundItems;
//	}
//
//
//	// M: Sprawdza czy dobrze sie dodala.
//	bool editItem(const std::string& typeName, const std::string& key, const std::string& keyValue, const std::map<std::string, std::string>& newAttributes) {
//		for (auto& item : items) {
//			try {
//				if (item.type.name == typeName && item.customAttributes.at(key) == keyValue) {
//					item.customAttributes = newAttributes;
//					return true;
//				}
//			}
//			catch (const std::out_of_range&) {
//				continue;
//			}
//		}
//		return false;
//	}
//
//	const ItemType* findItemTypeByName(const std::string& typeName) const {
//		auto it = std::find_if(types.begin(), types.end(),
//			[&typeName](const ItemType& type) { return type.name == typeName; });
//		if (it != types.end()) {
//			return &(*it);
//		}
//		else {
//			return nullptr;
//		}
//	}
//	
//	bool removeItem(const std::string& typeName, const std::string& key, const std::string& keyValue) {
//		auto it = std::remove_if(items.begin(), items.end(), [&](const CollectionItem& item) {
//			try {
//				return item.type.name == typeName && item.customAttributes.at(key) == keyValue;
//			}
//			catch (const std::out_of_range&) {
//
//				return false;
//			}
//			});
//
//		if (it != items.end()) {
//			items.erase(it, items.end());
//			return true;
//		}
//		return false;
//	}
//
//	// punkt 6. const - zeby zabezpieczyæ przed modyfikacjami. 
//	void listTypes() const {
//		for (const auto& type : types) {
//			std::cout << "Type: " << type.name << std::endl;
//			for (const auto& attr : type.attributes) {
//				std::cout << "  Attribute: " << attr << std::endl;
//			}
//		}
//	} 
//
//	// punkt 7. const - zeby zabezpieczyæ przed modyfikacjami. 
//	void displayAllItems() const {
//		for (const auto& item : items) {
//			std::cout << "Item Type: " << item.type.name << "\nStatus: " << item.status << "\nAttributes:\n";
//			for (const auto& attr : item.customAttributes) {
//				std::cout << "  " << attr.first << ": " << attr.second << '\n';
//			}
//			std::cout << "-------------------------\n";
//		}
//	} 
//};

class DataBase {
private:
    std::vector<ItemType> types;
    std::vector<CollectionItem> items;

public:
    void createItemType(const std::string& name, const std::vector<std::string>& attributes);
    void addItem(const ItemType& type, const std::map<std::string, std::string>& customAttributes, const std::string& status);
    std::vector<CollectionItem> findItems(const std::string& typeName) const;
    bool editItem(const std::string& typeName, const std::string& key, const std::string& keyValue, const std::map<std::string, std::string>& newAttributes);
    bool removeItem(const std::string& typeName, const std::string& key, const std::string& keyValue);
    void listTypes() const;
    void displayAllItems() const;
    const ItemType* findItemTypeByName(const std::string& typeName) const;
};

#endif // DATABASE_H