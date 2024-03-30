#include <vector>
#include <string>
#include <map>

#include "collection.h"
#include "itemType.h"
#include "collectionItem.h"

#pragma once


class DataBase
{
public:
	vector<itemType> types;
	vector<collectionItem> collections;

public: 
	void createItemType(const std::string& name, const std::vector<std::string>& attributes) {} //punkt 1.
	void listTypes() const {} // punkt 6. const - zeby zabezpieczyæ przed modyfikacjami. 
	void displayAllItems() const {} // punkt 7. const - zeby zabezpieczyæ przed modyfikacjami. 
	const itemType* findItemTypeByName(const std::string& typeName) const {}
	void addItem(const itemType& type, const std::map<std::string, std::string>& customAttributes, const std::string& status) {}
	std::vector<collectionItem> findItems(const std::string& typeName) const {}
	bool editItem(const std::string& typeName, const std::string& key, const std::string& keyValue, const std::map<std::string, std::string>& newAttributes) {} // M: Sprawdza czy dobrze sie dodala.
	bool removeItem(const std::string& typeName, const std::string& key, const std::string& keyValue) {}

};

