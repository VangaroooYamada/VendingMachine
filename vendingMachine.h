#pragma once
#include "drinkType.h"

class VendingMachine {
private:
    DrinkType buy(int payment, DrinkType drinkType);
    int refund();
};
