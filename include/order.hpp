#include<cstdint>
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
   

    public:

    enum class Orderside{
        BID,
        ASK,
    };
    enum class Qualifier{
        AON,                        // char GTC;               //Qualifier:- Good Til Cancelled
        GTC,                       // char AON;               //Qualifier:- All of None 

        
    };

    uint64_t order_id;
    uint64_t price;
    uint64_t trade_quantity;
    Orderside side;
    Qualifier qualifier;
    
    Order(uint64_t order_id, uint64_t price, uint64_t trade_quantity, Orderside side, Qualifier qualifier);
   
   
};
