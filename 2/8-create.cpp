#include <iostream>
#include <string>
using namespace std;

struct User {
    string name;
    string city;
};

User create_user (string name, string city) {
    User u;
    u.name = name;
    u.city = city;
    return u;
}

int main () {
    User u1 = create_user ("Oleksandr", "Kyiv");
    cout << "Name: " << u1.name << ", City: " << u1.city << endl;
    return 0;
}

