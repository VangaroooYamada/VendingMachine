#pragma once

class CoinStock {
private:
    int numberOf100yen = 10;

public:
    bool checkStock();
    void refundCoins();

    CoinStock();
    ~CoinStock();
};
