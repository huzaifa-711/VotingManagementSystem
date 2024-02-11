#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct PA {
    string name;
    string city;
    string party;
    int PAnumber;
};

void add(PA p[], int size) {
    ofstream fout;
    fout.open("candidate2.txt");
    for (int i = 0; i < size; i++) {
        cout << "Enter Candidate name:"<<endl;
        cin>>p[i].name;
        cout << "Enter City name: "<<endl;
        cin>>p[i].city;
        cout << "Enter Party name: "<<endl;
        cin>>p[i].party;
        cout << "Enter PA number:"<<endl;
        cin >> p[i].PAnumber;
        cout << "----------------------" << endl;
        fout << p[i].name << endl;
        fout << p[i].city << endl;
        fout << p[i].party << endl;
        fout << p[i].PAnumber << endl;
        cout << "------------------------" << endl;
    }
    fout.close();
}

void view(PA e[], int size) {
    ifstream fin;
    fin.open("candidate2.txt");
    for (int j = 0; j < size; j++) {
        fin>>e[j].name;
        fin>>e[j].city;
        fin>>e[j].party;
        fin >>e[j].PAnumber;
        cout << "Candidate:" << endl;
        cout << "Name: " << e[j].name << endl;
        cout << "City: " << e[j].city << endl;
        cout << "Party: " << e[j].party << endl;
        cout << "PA Number: " << e[j].PAnumber << endl;
        cout << "------------------------" << endl;
    }
    fin.close();
}

