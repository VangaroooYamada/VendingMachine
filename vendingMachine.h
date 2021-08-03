#pragma once
#include "drinkStock.h"
#include "coinstock.h"

class VendingMachine {
private:
    DrinkStock* drinkStocker;
    CoinStock* coinStocker;

public:
    DrinkType buy(int payment, DrinkType drinkType);
    int refund();
};
