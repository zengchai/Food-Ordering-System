#ifndef ORDERLIST_H
#define ORDERLIST_H
#include "Order.h"
#include "Menu.h"
#include <iostream>
using namespace std;

class Orderlist{
    private:
    Order* orders;
    int ordernum;
    Menu menu;
    public:
    Orderlist();
    void setMenu(Menu);
    void DisplayAll();
    //~Menu(void);
    //bool isEmpty(); 
    void InsertNode(string,string);
    //int findNode(double x);
    void DeleteNode();
    void DisplayList();
    void deleteall();
};

#endif