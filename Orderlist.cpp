#include <iostream>
#include <fstream>
#include <conio.h>
#include <iomanip>
#include "Menu.h"
#include "Food.h"
#include "Orderlist.h"
#include "Order.h"
using namespace std;

Orderlist::Orderlist(){
    orders = NULL;
    ordernum = 0;
}

void Orderlist::InsertNode(string m, string n){
    int currIndex = 0;
    int id,quan;
    int k=1;
    char ans = 'Y';
    while (ans=='Y'||ans=='y'){
    Order* prevNode = NULL;
    Order* currNode = orders;
    Order* newNode = new Order;

    while (currNode) {
    prevNode = currNode;
    currNode = currNode->next;
    currIndex++;
    }
    do{
    system("cls");
    cout << "Welcome to Jojoe Food, " << n << "!" << endl << endl;
    cout << "This is today's menu. Kindly key in the food ID and quantity that you want." << endl << endl << endl;
    menu.DisplayList();
    cout << endl;
    cout << endl << "Enter your food id: ";
    cin >> id;
    if (!menu.Checknode(id)){
        cout << "Error, we can't find the food id. Please try again." << endl << endl;
        cout << "Press any key to proceed.";
        getch();
    }
    }while(!menu.Checknode(id));
    cout << "Enter your food quantity: ";
    cin >> quan;
    newNode->f_id = id;
    newNode->quantity = quan;
    newNode->matricnum = m;
    newNode->name=n;

    if (currIndex == 0){
        newNode->next = orders;
        orders = newNode;
        currIndex++;
    }
    else{
        newNode->next = prevNode->next;
        prevNode->next = newNode;
    }
    
    cout << "Add more order (y/n) : ";
    cin >> ans;
    }
    ordernum=currIndex;
    
}

void Orderlist::DisplayList(){
    int num = 0;
    if (orders!=NULL){
    Order* currNode = orders;
    cout << "Order History" << endl << endl << endl;
    cout << "Customer info" << endl << endl;
    cout << endl << "Name: " << currNode->name << endl;
    cout << "Matric Number: " << currNode->matricnum << endl << endl << endl;
    cout << "Order info" << endl << endl;
    cout << endl << left << setw(10) << "ID" << setw(30) << "Food Name" << setw(20) << "Price/RM" << setw(10) << "Quantity" << endl;
    for (int loop = 0;loop<=ordernum;loop++){
    while (currNode != NULL){
        menu.findNode(currNode->f_id,currNode->quantity);
        currNode = currNode->next;
    }}}
    else {
        cout << "Order History" << endl << endl << endl;
        cout << "No order" << endl;
    }
}

void Orderlist::DisplayAll(){
    int num = 0;
    if (orders!=NULL){
    Order* currNode = orders;
    cout << endl << "Name: " << currNode->name << endl;
    cout << "Matric Number: " << currNode->matricnum << endl << endl;
    cout << "Order info" << endl;
    cout << endl << left << setw(10) << "ID" << setw(30) << "Food Name" << setw(20) << "Price/RM" << setw(10) << "Quantity" << endl;
    for (int loop = 0;loop<=ordernum;loop++){
    while (currNode != NULL){
        menu.findNode(currNode->f_id,currNode->quantity);
        currNode = currNode->next;
    }}}
    else {
        cout << "Order History" << endl << endl << endl;
        cout << "No order" << endl;
    }
}
void Orderlist::setMenu(Menu m){
    menu = m;
}

void Orderlist::DeleteNode(){
    system("cls");
    int ans;
    this->DisplayList();
    cout << endl << endl << "Enter the food id that you want to remove: ";
    cin >> ans;
    Order* prevNode = NULL;
    Order* currNode = orders;
    while(currNode && currNode->f_id != ans){
        prevNode = currNode;
        currNode = currNode->next;
    }
    if (currNode){
        cout <<  "The order has been deleted";
        if (prevNode){
            prevNode->next = currNode->next;
            delete currNode;
        }
        else{
            orders = currNode->next;
            delete currNode;
        }
    }
    else{
        cout << "No order is found.";
    }
}

void Orderlist::deleteall(){
    orders = NULL;
}
