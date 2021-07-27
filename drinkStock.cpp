#include "drinkStock.h"

class DrinkStock
{
private:
    std::map<DrinkType, int> stocks {
        {DrinkType::Coke, 5},
        {DrinkType::Diet_Coke, 5},
        {DrinkType::Tea, 5},
    };

public:
    bool checkStocks(DrinkType drinkType) {
        return stocks[drinkType] > 0;
    };
    void decreaseStocks(DrinkType drinkType) {
        stocks[drinkType]--;
    };
};