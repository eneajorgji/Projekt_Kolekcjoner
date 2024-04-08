#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <limits>

#include "DataBase.h"
#include "ItemType.h"
#include "CollectionItem.h"


using namespace std;

int main()
{
    DataBase db;

    string action, typeName, status;
    string key, value; 
    int attributeCount;

    vector<string> attributeNames;
    map<string, string> customAttributes;
    
    
    // Menu konsolowe
    while (true) {
        cout << "Choose an action: \n"
            << "1. Create new item type\n"
            << "2. Add new item\n"
            << "3. Find items\n"
            << "4. Edit item\n"
            << "5. Remove item\n"
            << "6. List all item types\n"
            << "7. Display all items\n"
            << "8. Exit\n"
            << "Enter your choice: ";
        
        cin >> action;
        //std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        

        // 1
        if (action == "1") {
            cout << "Enter item type name: ";
            cin >> typeName;

            cout << "How many attributes? " << endl;
            cin >> attributeCount;
            
            attributeNames.clear();

            for (int i = 0; i < attributeCount; ++i) {
                cout << "Enter attribute name: ";
                cin >> key; 
                                
                attributeNames.push_back(key);
            }

            db.createItemType(typeName, attributeNames);
        } 
        
        else if (action == "2") {
            cout << "Enter item type name: "; 
            cin >> typeName;

            const ItemType* itemType = db.findItemTypeByName(typeName);
            
            if (itemType == nullptr) {
                cout << "Item type not found.\n"; 
                continue;
            }

            cout << "Enter Status: ";
            cin >> status;

            customAttributes.clear();

            for (const auto& attrName : itemType->attributes) {
                cout << "Enter " << attrName << ": ";
                cin >> value;

                customAttributes[attrName] = value;
            }

            db.addItem(*itemType, customAttributes, status);
        }


        else if (action == "3") {
            cout << "Enter item type name to find: ";
            cin >> typeName;

            auto foundItems = db.findItems(typeName);

            for (const auto& item : foundItems) {
                std::cout << item.type.name << " found with status " << item.status << '\n';
            }
        }
        
        else if (action == "4") {
            cout << "Enter item type name: ";
            std::getline(std::cin, typeName);

            std::string identifyingKey, identifyingValue;
            std::cout << "Enter identifying attribute name: ";

            std::getline(std::cin, identifyingKey);
            std::cout << "Enter identifying attribute value: ";
            
            std::getline(std::cin, identifyingValue);

            std::map<std::string, std::string> newAttributes;
            std::cout << "Enter new attributes (name value pairs, 'attributeName attributeValue'), finish with 'done':\n";
            std::string attrName, attrValue;

            while (true) {
                std::getline(std::cin, attrName);
                if (attrName == "done") break;
                std::getline(std::cin, attrValue);
                newAttributes[attrName] = attrValue;
            }

            if (db.editItem(typeName, identifyingKey, identifyingValue, newAttributes)) {
                std::cout << "Item updated successfully.\n";
            }
            else {
                std::cout << "Failed to update item. It may not exist or the identifier was incorrect.\n";
            }
        }

        else if (action == "5") {
            std::cout << "Enter item type name: ";
            std::getline(std::cin, typeName);

            std::string identifyingKey, identifyingValue;
            std::cout << "Enter identifying attribute name: ";

            std::getline(std::cin, identifyingKey);
            std::cout << "Enter identifying attribute value: ";
            std::getline(std::cin, identifyingValue);

            if (db.removeItem(typeName, identifyingKey, identifyingValue)) {
                std::cout << "Item updated successfully.\n";
            }
            else {
                std::cout << "Failed to remove item. It may not exist or the identifier was incorrect.\n";
            }
        }

        else if (action == "6") {
            db.listTypes();
        }

        
        else if (action == "7") {
            cout << "Action 7 ";
            db.displayAllItems();
        }

        
        else if (action == "8") {
            cout << "You exit the programme";
            break;
        }
        else {
            cout << "Invalid Action, try again!";
            };
            
    }
    return 0;
}
