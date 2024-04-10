#pragma once
#include <vector>
#include "CollectionItem.h"
#include "DataBase.h"

class SearchUtility {
public:
	static std::vector<CollectionItem> searchByAttribute(const DataBase& db, const std::string& attributeName, const std::string& attributeValue);



};