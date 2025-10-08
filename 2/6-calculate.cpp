#include <iostream>
using namespace std; 

double average (double a, double b) {
    return (a + b) / 2;
}

double square (double x) {
    return x * x;
}

double cube (double x) {
    return x * x * x;
}

void calculate (double results[]) {
    for (int i = 0; i <= 9; i++) {
        results[i] = average (square(i), cube(i));
    }
}

int main () {
   double results[10];
    calculate (results);
    for (int i = 0; i <= 9; i++)
        cout << results[i] << endl;
    return 0;
}