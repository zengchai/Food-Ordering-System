#ifndef FOOD_H
#define FOOD_H
#include <iostream>
using namespace std;

class Food
{
    public:
    string f_name;
    int f_id;
    float f_price;
    Food* next;
    Food();
    void setf_name(string);
    void setf_id(string);
    void setf_price(string);
    string getf_name();
    int getf_id();
    float getf_price();
};

#endif
