#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

unordered_map <string, string> phonebook;

string FindPhoneByName (const string& name) {
    if (phonebook.find(name) != phonebook.end()) {
        return phonebook[name];
    } else {
        return "Not found";
    }
}

int main () {
    phonebook["Ivan"] = "+380681234567";
    phonebook["Petr"] = "+380671234567";
    phonebook["Olga"] = "+380961234567";
    phonebook["Anna"] = "+380441234567";

    string name;
    cout << "Enter name :";
    cin >> name;
    cout << "Phone number: " << FindPhoneByName(name) << endl;
    return 0;
}