#include <vector>
#include <string>
#include <map>

//#include "collection.h"
#include "itemType.h"
#include "collectionItem.h"

#pragma once


class DataBase
{
public:
	vector<itemType> types;
	vector<collectionItem> collections;

public: 
	void createItemType(const std::string& name, const std::vector<std::string>& attributes) { types.emplace_back(name, attributes); } //punkt 1. -> {wszystkie te dane dodaje to wektora}
	void addItem(const itemType& type, const std::map<std::string, std::string>& customAttributes, const std::string& status) {collections.emplace_back(type, customAttributes, status);}
	
	// M: Sprawdza czy dobrze sie dodala.
	bool editItem(const std::string& typeName, const std::string& key, const std::string& keyValue, const std::map<std::string, std::string>& newAttributes) {
		for (auto & item : items) {

			try {
				if (item.type.name == typeName && item.customAttributes.at(key) == keyValue) {
					item.customAttributes = newAttributes;
					return true;
				}
			}
			catch (const std::out_of_range&) {
				cout << "Change not possible. ";
				continue;
			}
		}
		return false;
	} 

	const itemType* findItemTypeByName(const std::string& typeName) const {
		std::vector<collectionItem> foundItems;
		for (const auto& item : items) {
			if (item.type.name == typeName) {
				foundItems.push_back(item);
			}
		}
		return foundItems;
	}
	
	bool removeItem(const std::string& typeName, const std::string& key, const std::string& keyValue) {
		auto it = std::remove_if(items.begin(), items.end(), [&](const collectionItem& item) {
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

	// punkt 6. const - zeby zabezpieczyć przed modyfikacjami. 
	void listTypes() const {
		for (const auto& type : types) {
			std::cout << "Type: " << type.name << std::endl;
			for (const auto& attr : type.attributes) {
				std::cout << "  Attribute: " << attr << std::endl;
			}
		}
	} 

	// punkt 7. const - zeby zabezpieczyć przed modyfikacjami. 
	void displayAllItems() const {
		for (const auto& item : items) {
			std::cout << "Item Type: " << item.type.name << "\nStatus: " << item.status << "\nAttributes:\n";
			for (const auto& attr : item.customAttributes) {
				std::cout << "  " << attr.first << ": " << attr.second << '\n';
			}
			std::cout << "-------------------------\n";
		}
	} 

	std::vector<collectionItem> findItems(const std::string& typeName) const {
		auto it = std::find_if(types.begin(), types.end(),
			[&typeName](const itemType& type) { return type.name == typeName; });
		if (it != types.end()) {
			return &(*it);
		}
		else {
			return nullptr;
		}
	}
};

