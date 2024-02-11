#include<iostream>
#include "NAManagement.h"
#include "votinglist.h"
#include "PAManagement.h"
using namespace std;

int main() {
   const int candidate=5;
   const int voter=50;
   NA a[candidate];
   PA b[candidate];
   votinglist c[voter];
do{
    int choice;
    cout << "---------------VOTING MANAGEMENT SYSTEM-------------" << endl;
    cout << "ENTER YOUR CHOICE (1-5): "<<endl;
    cout<<  "PRESS 1 FOR NA MANAGEMENT"<<endl;
    cout<<  "PRESS 2 FOR PA MANAGEMENT"<<endl;
    cout<<  "PRESS 3 FOR VOTING LIST  "<<endl;
    cout<<  "PRESS 4 TO EXIT         "<<endl;
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "------NA MANAGEMENT SYSTEM--------------" << endl;
            add(a,candidate);
            view(a,candidate);
            break;
        case 2:
            cout << "------PA MANAGEMENT SYSTEM--------------" << endl;
            add(b,candidate);
            view(b,candidate);
            break;
        case 3:
            cout << "------VOTING LIST MANAGEMENT------------" << endl;
            add(c,voter);
            view(c,voter);
            break;
        case 4:
            cout << "-------EXIT-----------------------------" << endl;
            exit(0); // Exit program
            break;
        default:
            cout << "-----INVALID INPUT-----" << endl;
            break;
            
        
    }
}while(1);

    return 0;
}

