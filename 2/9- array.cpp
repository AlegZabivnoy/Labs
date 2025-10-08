#include <iostream>
#include <string>
using namespace std;

struct phonebook {
    string name;
    string phone;
};

string FindPhoneByName (phonebook pb[][2], int rows, const string& name) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 2; j++) {
            if (pb[i][j].name == name) {
                return pb[i][j].phone;
            }
        }
    }
    return "Not found";
}

int main () {
    const int rows = 2;
    const int cols = 2;

    phonebook pb[rows][cols] = {
        {{"Ivan", "+380681234567"}, {"Petr", "+380671234567"}},
        {{"Olga", "+380961234567"}, {"Anna", "+380441234567"}}
    };
    
    string name;
    cout << "Enter name to find phone number: ";
    cin >> name;
    string phone = FindPhoneByName(pb, rows, name);
    cout << "Phone number: " << phone << endl;
    return 0;
}

