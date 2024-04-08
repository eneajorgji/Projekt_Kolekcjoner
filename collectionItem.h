#ifndef COLLECTIONITEM_H
#define COLLECTIONITEM_H

#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <limits>

#include"ItemType.h"
#include "Displayable.h"

//#include "DataBase.h"

using namespace std;

//class CollectionItem {
//public:
//    ItemType type;
//    std::map<std::string, std::string> customAttributes;
//    std::string status;
//
//    CollectionItem(const ItemType& type, const std::map<std::string, std::string>& customAttributes, const std::string& status)
//        : type(type), customAttributes(customAttributes), status(status) {}
//};
//
//bool operator==(const CollectionItem& lhs, const CollectionItem& rhs) {
//    return lhs.type.name == rhs.type.name && lhs.customAttributes == rhs.customAttributes && lhs.status == rhs.status;
//}

class CollectionItem : public Displayable {
public:
    ItemType type;
    std::map<std::string, std::string> customAttributes;
    std::string status;

    CollectionItem(const ItemType& type, const std::map<std::string, std::string>& customAttributes, const std::string& status);

    void display() const override;

    virtual std::string getDescription() const override;

};

bool operator==(const CollectionItem& lhs, const CollectionItem& rhs);





#endif // COLLECTIONITEM_H