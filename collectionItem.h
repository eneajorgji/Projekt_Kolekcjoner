#include <vector>
#include <string>
#include <map>

#include "itemType.h"

using namespace std;

#pragma once

class collectionItem 
{
public:
	itemType type;
	map<string, string> customAttributes;
	string status;

public:
	collectionItem(const itemType& type, const std::map<std::string, std::string>& customAttributes, const std::string& status)
        : type(type), customAttributes(customAttributes), status(status) {}


};

