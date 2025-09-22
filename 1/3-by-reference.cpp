#include <iostream> 
using namespace std;

struct Num {
    int num;
};


void inc (Num &obj) {
   obj.num = obj.num + 1;
}


int main () {
    Num obj{5};
    inc (obj);
    cout << "obj.num:" << obj.num << endl;
}