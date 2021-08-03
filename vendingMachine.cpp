#include <iostream>
#include "vendingMachine.h"

using namespace std;

class VendingMachine {
private:
    DrinkStock* drinkStocker = new DrinkStock;
    CoinStock* coinStocker = new CoinStock;

public:
    DrinkType buy(int payment, DrinkType drinkType) {

        // Payment must be 100 or 500 yen
        if (payment != 100 && payment != 500) {
            cout << "Payment must be 100 or 500 yen." << endl;
            return DrinkType::Null;
        }

        // Coin for refund Shortage
        if (!coinStocker->checkStocks()) {
            cout << "Coin for refund shortage." << endl;
            return DrinkType::Null;
        }

        // Drink Stock Shortage
        if (!drinkStocker->checkStocks(drinkType))
        {
            cout << "Drink shortage." << endl;
            return DrinkType::Null;
        }

        // Get Drink
        drinkStocker->decreaseStocks(drinkType);
        return drinkType;
    }

    int refund(int payment) {
        if (payment == 500) {
            coinStocker->refundCoins();
            return 400;
        }

        return 0;
    }
};
