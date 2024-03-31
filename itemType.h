#include <vector>
#include <string>
using namespace std;

#pragma once


class itemType
{
public:
	string typeName;
	vector<string> attributes;

public:
	// Konstruktor -> itemType
	itemType(const string& name, const vector<string>& attributes)
		: typeName(name), attributes(attributes) {}
};

