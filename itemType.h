#include <vector>
#include <string>
using namespace std;

#pragma once


class itemType
{
public:
	string name;
	vector<string> attributes;

public:
	itemType(const string& name, const vector<string>& attributes)
		: name(name), attributes(attributes) {}
};

