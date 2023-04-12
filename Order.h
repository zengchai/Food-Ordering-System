#ifndef ORDER_H
#define ORDER_H
#include <iostream>
using namespace std;

class Order
{
    public:
    Order();
    int f_id,quantity;
    string matricnum,name;
    Order* next;
};

#endif
