#include <iostream>
#include <conio.h>
#include <iomanip>
#include "Buyer.h"
#include "BuyerLinkedList.h"
using namespace std;

List::List(){
    head = NULL;
    currIndex = 0;
}

void List::InsertNode(Orderlist o) {
    Buyer* prevNode = NULL;
    Buyer* currNode = head;
    Buyer* newNode = new Buyer;

    while (currNode) {
    prevNode = currNode;
    currNode = currNode->next;
    currIndex++;
    }

    newNode->s = o;
    
    if (currIndex == 0){
        newNode->next = head;
        head = newNode;
        currIndex++;
    }
    else{
        newNode->next = prevNode->next;
        prevNode->next = newNode;
    }
}

void List::buyerdisplay(){
    int i = 0;
    Buyer* temphead = head;
    cout << "Order History" << endl;
    if (temphead){
    while (temphead!=NULL){
    if (i < currIndex)
    cout << endl << endl << "Order " << i+1 << endl ;
    temphead->s.DisplayAll();
    temphead = temphead->next;
    i++;
    }}
    else{
        cout << "No order has been made.";
    }
}