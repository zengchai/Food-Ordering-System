#ifndef BUYERLINKEDLIST
#define BUYERLINKEDLIST
#include <iostream>
#include "Buyer.h"
#include "Orderlist.h"
using namespace std;



class List
{
    private:
    Buyer* head;
    int currIndex;
    public:
    List();
    void InsertNode(Orderlist);
    void buyerdisplay();
};

#endif
