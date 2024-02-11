#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct NA {
    string name;
    string city;
    string party;
    int NAnumber;
};

void add(NA n[], int size) {
    ofstream fout;
    fout.open("candidate1.txt");
    for (int i = 0; i < size; i++) {
        cout << "Enter Candidate name:"<<endl;
        cin>>n[i].name;
        cout << "Enter City name: "<<endl;
        cin>>n[i].city;
        cout << "Enter Party name: "<<endl;
        cin>>n[i].party;
        cout << "Enter NA number:"<<endl;
        cin >> n[i].NAnumber;
        cout << "----------------------" << endl;
        fout << n[i].name << endl;
        fout << n[i].city << endl;
        fout << n[i].party << endl;
        fout << n[i].NAnumber << endl;
        cout << "------------------------" << endl;
    }
    fout.close();
}

void view(NA d[], int size) {
    ifstream fin;
    fin.open("candidate1.txt");
    for (int j = 0; j < size; j++) {
        fin>>d[j].name;
        fin>>d[j].city;
        fin>>d[j].party;
        fin >>d[j].NAnumber;
        cout << "Candidate:" << endl;
        cout << "Name: " << d[j].name << endl;
        cout << "City: " << d[j].city << endl;
        cout << "Party: " << d[j].party << endl;
        cout << "NA Number: " << d[j].NAnumber << endl;
        cout << "------------------------" << endl;
    }
    fin.close();
}

