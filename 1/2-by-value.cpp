#include <iostream> 
using namespace std;

int inc (int a) {
    return a + 1;
}

int main () {
    int a = 2;
    int b = inc(a);
    cout << "a:" << a << endl; 
    cout << "inc(a):" << inc(a) << endl; 
    cout << "a:" << a << endl; 
}
