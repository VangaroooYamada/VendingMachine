#pragma once

class CoinStock {
private:
    int numberOf100yen = 10;

public:
    bool checkStocks();
    void refundCoins();

    CoinStock();
    ~CoinStock();
};
