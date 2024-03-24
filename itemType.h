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
	itemType(string typeName, vector<string> attributes):
	typeName(typeName), attributes(attributes) {}
};

