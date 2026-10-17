// class Order
// {
// private:
//     /* data */
//     long long balance;
// public:
//     long long trade_amount;
//     int trade_quantity;
//         Order(long long balance, long long trade_amount, int trade_quantity);
    
// };

class Order{
    private:
    long long balance;

    public:
    int trade_quantity;
    long long trade_amount;
    // char GTC;               //Qualifier:- Good Til Cancelled
    // char AON;               //Qualifier:- All of None 

    enum class qualifier{
        AON,
        GTC,
    };

    Order(long long balance, int trade_quantity, long long trade_amount);
   //Class Methods
    double bidOrder(int trade_quantity, double trade_amount);
    double askOrder(int trade_quantity, double trade_amount);

    //Abstract methods
    void GoodTillCancelled();
    void AlOfNone();

};
