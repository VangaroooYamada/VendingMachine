#pragma once
#include <map>
#include "drinkType.h"

class DrinkStock
{
private:
    std::map<DrinkType, int> drinkStocker;

public:
    bool checkStocks(DrinkType drinkType);
    void decreaseStocks(DrinkType drinkType);

    DrinkStock();
    ~DrinkStock();
};