#include "drinkStock.h"

class DrinkStock
{
private:
    std::map<DrinkType, int> stocks {
        {DrinkType::Coke, 0},
        {DrinkType::Diet_Coke, 0},
        {DrinkType::Tea, 0},
    };

public:
    bool checkStocks(DrinkType drinkType) {
        return stocks[drinkType] > 0;
    };

    void decreaseStocks(DrinkType drinkType) {
        stocks[drinkType]--;
    };

    DrinkStock() {
        stocks[DrinkType::Coke] = 5;
        stocks[DrinkType::Diet_Coke] = 5;
        stocks[DrinkType::Tea] = 5;
    }

    ~DrinkStock() {
    }
};