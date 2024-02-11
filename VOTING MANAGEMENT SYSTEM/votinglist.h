#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct votinglist {
    string name;
    string cnic;
    int NAnumber;
    int PAnumber;
    string address;
};

void add(votinglist v[], int size) {
    ofstream fout;
    fout.open("voterdata.txt");
    for (int i = 0; i < size; i++) {
        cout << "Enter Voter Name: " << endl;
        cin>>v[i].name;

        cout << "Enter CNIC Number: " << endl;
        cin>>v[i].cnic;

        string choice;
        cout << "Are you from the federal capital? : ";
        cin >> choice;
        if (choice == "yes") {
            cout << "Enter NA Number: " << endl;
            cin >> v[i].NAnumber;
        } else {
            cout << "Enter PA Number: " << endl;
            cin >> v[i].PAnumber;
            cout << "Enter NA Number: " << endl;
            cin >> v[i].NAnumber;
        }

        cout << "Enter POLLING BOOTH ADDRESS: " << endl;
        cin>>v[i].address;

        cout << "-------------------------------" << endl;
        fout << v[i].name << endl;
        fout << v[i].cnic << endl;
        fout << v[i].NAnumber << endl;
        fout << v[i].PAnumber << endl;
        fout << v[i].address << endl;
        cout << "-----------------------------------" << endl;
    }
    fout.close();
}

void view(votinglist f[], int size) {
    ifstream fin;
    fin.open("voterdata.txt");
    for (int j = 0; j < size; j++) {
        fin>>f[j].name; 
        fin>>f[j].cnic; 
        fin>>f[j].NAnumber;
        fin>>f[j].PAnumber;
        fin>>f[j].address; 
        cout << "Voter Data:" << endl;
        cout << "Name: " << f[j].name << endl;
        cout << "CNIC: " << f[j].cnic << endl;
        cout << "NA Number: " << f[j].NAnumber << endl;
        cout << "PA Number: " << f[j].PAnumber << endl;
        cout << "Address: " << f[j].address << endl;
        cout << "-------------------------------------" << endl;
    }
    fin.close();
}

