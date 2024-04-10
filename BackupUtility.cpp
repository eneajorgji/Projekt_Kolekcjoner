#include "BackupUtility.h"

static void backup(const DataBase& db) {
    std::cout << "Backup started \n";
    for (const auto& item : db.getItems()) {
        std::cout << item.getDescription() << std::endl;
    }
    std::cout << "Backup completed.\n";
}
};
