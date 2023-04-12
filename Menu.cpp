#include <iostream>
#include <fstream>
#include <conio.h>
#include <iomanip>
#include "Menu.h"
#include "Food.h"
using namespace std;

Menu::Menu(){
    food = NULL;
    foodindex = 0;
}

void Menu::InsertNodeB(){
    if (food != NULL){
        food = NULL;
    }
    string sfile;
    cout << "Update Menu" << endl << endl;
    cout << "Enter the name of menu (.txt) : ";
    cin >> sfile;
    fstream infile;
    infile.open(sfile,ios::in);
    int currIndex = 0;
    int id;
    float price;
    string name;
    if (!infile){
        cout << "The input file does not exist." << endl;
    }
    else{
        cout << "The input file is uploaded." << endl;
    while (!infile.eof()){
    Food* prevNode = NULL;
    Food* currNode = food;
    Food* newFood = new Food;

    while (currNode) {
    prevNode = currNode;
    currNode = currNode->next;
    currIndex++;
    }

    infile>>id>>name>>price;
    newFood->f_name = name;
    newFood->f_id = id;
    newFood->f_price = price;

    if (currIndex == 0){
        newFood->next = food;
        food = newFood;
        currIndex++;
    }

    else{
        newFood->next = prevNode->next;
        prevNode->next = newFood;
    }}}
    foodindex = currIndex;
    infile.close();
    
}

void Menu::DisplayList(){
    int num = 0;
    Food* currNode = food;
    cout << "Menu" << endl << endl;
    cout <<left<<setw(10)<<"ID"<<setw(30)<<"Food Name"<<setw(20)<<"Price/RM"<<endl;
    while (currNode != NULL){
    cout <<left<<setw(10)<<currNode->f_id<<setw(30)<<currNode->f_name<<setw(20)<<currNode->f_price<<endl;
    currNode = currNode->next;
    }
}



void Menu::findNode(int s,int q){
    Food* currNode = food;
    while (currNode && currNode->f_id != s){
        currNode = currNode->next;
    }
    if (currNode)
        {
            cout <<left<<setw(10)<<currNode->f_id<<setw(30)<<currNode->f_name<<setw(20)<<currNode->f_price*q<<setw(10) << q <<endl;
        }
}

bool Menu::Checknode(int s){
    Food* currNode = food;
    while (currNode && currNode->f_id != s){
        currNode = currNode->next;
    }
    if(currNode){
        return true;
    }
    return false;
    
}