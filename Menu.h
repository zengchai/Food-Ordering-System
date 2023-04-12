#ifndef MENU_H
#define MENU_H
#include <iostream>
#include "Food.h"
using namespace std;

class Menu{
    private:
    Food* food;
    int foodindex;
    public:
    Menu();
    void findNode(int,int);
    //~Menu(void);
    //bool isEmpty(); 
    void InsertNodeB();
    //int findNode(double x);
    //int DeleteNode(double x);
    void DisplayList();
    bool Checknode(int);
};

#endif