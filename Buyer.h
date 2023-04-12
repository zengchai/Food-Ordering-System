#ifndef BUYER_H
#define BUYER_H
#include <iostream>
#include "Orderlist.h"
using namespace std;



class Buyer
{
    public:
    Orderlist s;
    Buyer* next;
    Buyer();
};
#endif
