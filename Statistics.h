#pragma once

#include "DataBase.h"

class Statistics
{
public:
    static int getItemCount(const DataBase& db);
    static int getTypeCount(const DataBase& db);
};

