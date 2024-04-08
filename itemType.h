// ItemType.h
#ifndef ITEMTYPE_H
#define ITEMTYPE_H

#include <string>
#include <vector>
#include "Displayable.h"

class ItemType : public Displayable {
public:
    std::string name;
    std::vector<std::string> attributes;

    ItemType(const std::string& name, const std::vector<std::string>& attributes);

    void display() const override;    

    virtual std::string getDescription() const override;

};

#endif // ITEMTYPE_H
