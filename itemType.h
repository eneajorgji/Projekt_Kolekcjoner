// ItemType.h
#ifndef ITEMTYPE_H
#define ITEMTYPE_H

#include <string>
#include <vector>

class ItemType {
public:
    std::string name;
    std::vector<std::string> attributes;

    ItemType(const std::string& name, const std::vector<std::string>& attributes);
};

#endif // ITEMTYPE_H
