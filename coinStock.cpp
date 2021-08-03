class CoinStock
{
private:
    int numberOf100yen = 0;

public:
    bool checkStocks() {
        return this->numberOf100yen > 4;
    }

    void refundCoins() {
        this->numberOf100yen -= 4;
    }

    CoinStock() {
        this->numberOf100yen = 10;
    }

    ~CoinStock() {
    }
};