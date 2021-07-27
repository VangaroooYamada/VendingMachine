#include "drinkStock.h"

class DrinkStock
{
private:
    std::map<DrinkType, int> drinkStocker {
        {DrinkType::Coke, 5},
        {DrinkType::Diet_Coke, 5},
        {DrinkType::Tea, 5},
    };

public:
    bool checkStocks(DrinkType drinkType) {
        return drinkStocker[drinkType] > 0;
    };
    void decreaseStocks(DrinkType drinkType) {
        drinkStocker[drinkType]--;
    };
};