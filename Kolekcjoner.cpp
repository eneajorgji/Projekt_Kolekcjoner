#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

#include "DataBase.h"
#include "collection.h"
#include "itemType.h"


using namespace std;

int main()
{
    string action, typeName, status;
    string key, value; 
    int attributeCount;

    vector<string> attributeNames;
    map<string, string> customAttributes;
    
    DataBase db;


    // Menu
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

        if (action == "8") {
            break;
            cout << "You exit the programme";
        } 
        else {
            cout << "Invalid Action, try again!";
            };

        if (action == "1") {
            cout << "Podaj typeName: ";
            cin >> typeName;

            cout << "Podaj iloœæ atrybutów" << endl;
            cin >> attributeCount;
            
            attributeNames.clear();

            for (int i = 0; i < attributeCount; i++) {
                cout << "Podaj nazwe atrybuty: " << i + 1 << " ";
                cin >> key; 
                                
                attributeNames.push_back(key);

            }

            db.createItemType(typeName, attributeNames);
        }


        if (action == "2") {

        }
        if (action == "3") {

        }
        if (action == "4") {

        }
        if (action == "5") {

        }
        if (action == "6") {
            db.listTypes();
        }
        if (action == "7") {
            db.displayAllItems();
        }
        
    }



}
