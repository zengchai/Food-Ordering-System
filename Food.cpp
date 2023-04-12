#include <iostream>
#include "Food.h"
#include <iomanip>
using namespace std;

Food::Food(){
    f_name="";
    f_id=0;
    f_price=0;
}

void Food::setf_id(string id){

    f_id = stoi(id);
}

void Food::setf_name(string name){
    f_name = name;
}

void Food::setf_price(string price){
    f_price = stof(price);
}

int Food::getf_id(){
    return f_id;
}

string Food::getf_name(){
    return f_name;
}

float Food::getf_price(){
    return f_price;
}
