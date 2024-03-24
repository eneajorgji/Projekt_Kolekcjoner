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
	map<string, int> mpItemType;
	string status;

public:
	collectionItem(itemType type, string status):
	type(type), status(status) {}

	/*mpItemType["typeName"] = 1;
	mpItemType[""]*/
};

