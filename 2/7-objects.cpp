#include <iostream> 
#include <string>
using namespace std;

struct person {
    string name;
};

int main () {
    const person p1 = {"Oleksnadr"};
    person p2  = {"Oleg"};

    cout << p1.name << endl;
    cout << p2.name << endl;
    return 0;
}