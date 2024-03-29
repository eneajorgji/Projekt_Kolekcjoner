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

};

