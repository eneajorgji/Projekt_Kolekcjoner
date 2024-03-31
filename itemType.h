#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <limits>



using namespace std;

#pragma once


class ItemType {
public:
    std::string name;
    std::vector<std::string> attributes;

    ItemType(const std::string& name, const std::vector<std::string>& attributes)
        : name(name), attributes(attributes) {}
};

