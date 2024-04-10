#include "SearchUtility.h"

static std::vector<CollectionItem> searchByAttribute(const DataBase& db, const std::string& attributeName, const std::string& attributeValue) {
    return db.findItemsByAttribute(attributeName, attributeValue);
}
