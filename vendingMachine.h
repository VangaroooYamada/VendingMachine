#pragma once
#include "drinkType.h"

class VendingMachine {
public:
    DrinkType buy(int payment, DrinkType drinkType);
    int refund();
};
