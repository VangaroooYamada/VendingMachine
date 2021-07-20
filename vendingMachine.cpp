#include <iostream>
#include "vendingMachine.h"
#include "coin.h"

using namespace std;

class VendingMachine {
public:
    DrinkType buy(int payment, DrinkType drinkType) {

        // Payment must be 100 or 500 yen
        if (payment != 100 && payment != 500) {
            cout << "Payment must be 100 or 500 yen." << endl;
            return DrinkType::Null;
        }

        // Coin for refund Shortage


        // Drink Stock Shortage


        // Get Drink

    }

    int refund() {
    }
};
