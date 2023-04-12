#include <iostream>
#include <iomanip>
#include <conio.h>
#include "Menu.h"
#include "Food.h"
#include "Buyer.h"
#include "BuyerLinkedList.h"
#include "Orderlist.h"
using namespace std;

char menus(){
    char z;
    cout << "Menu" << endl << endl;
    cout << "Choose your option" << endl;
    cout << "A. Buyer" << endl;
    cout << "B. Seller" << endl;
    cout << "C. Exit" << endl << endl;
    cout << "Ans: ";
    cin >> z;
    return z;
}

char smenu(){
    char z;
    cout << "Seller" << endl << endl;
    cout << "Choose your option" << endl;
    cout << "A. Check Menu" << endl;
    cout << "B. Update Menu" << endl;
    cout << "C. Check Order" << endl;
    cout << "D. Exit" << endl << endl;
    cout << "Ans: ";
    cin >> z;
    return z;
}

char bmenu(){
    char z;
    cout << "Buyer" << endl << endl;
    cout << "Choose your option" << endl;
    cout << "A. Add Order" << endl;
    cout << "B. Delete Order" << endl;
    cout << "C. Check Order" << endl;
    cout << "D. Exit" << endl << endl;
    cout << "Ans: ";
    cin >> z;
    return z;
}

int main(){
    Menu z;
    Orderlist d;
    List buyer;
    string s;
    char ans1,ans2;
    string n, m;
    int count =0;
    bool loops = true;
    while(loops){
        int size=0;
        ans1=menus();
        if (ans1=='a'||ans1=='A'){
            while(loops){
            system("cls");
            ans2=bmenu();
            if (ans2=='a'||ans2=='A'){
                size++;
                system("cls");
                if(size<=1){
                cout << "Order Details" << endl << endl;
                cout << "Enter your name: ";
                cin.ignore();
                getline(cin,n);
                cout << "Enter your matric: ";
                cin >> m;}
                d.setMenu(z);
                d.InsertNode(m,n);
            }
            if (ans2=='b'||ans2=='B'){
                d.DeleteNode();
                cout << endl << endl << "Press any key to proceed.";
                getch();
            }
            if (ans2=='c'||ans2=='C'){
                system("cls");
                d.DisplayList();
                cout << endl << endl << "Press any key to proceed.";
                getch();
            }
            if (ans2=='d'||ans2=='D'){
                buyer.InsertNode(d);
                d.deleteall();
                break;
            }}}
        if (ans1=='b'||ans1=='B'){
            while(loops){
            system("cls");
            ans2=smenu();
            if (ans2=='a'||ans2=='A'){
                system("cls");
                z.DisplayList();
                cout << endl << endl << "Press any key to proceed.";
                getch();
            }
            if (ans2=='b'||ans2=='B'){
                system("cls");
                z.InsertNodeB();
                cout << endl << endl << "Press any key to proceed.";
                getch();
            }
            if (ans2=='c'||ans2=='C'){
                system("cls");
                buyer.buyerdisplay();
                cout << endl << endl << "Press any key to proceed.";
                getch();
            }
            if (ans2=='d'||ans2=='D'){
                break;
            }
            }
        }
        if (ans1=='c'||ans1=='C'){
            system("cls");
            break;
        }
        system("cls");}
    system("pause");
    }