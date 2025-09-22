#include <iostream> 
using namespace std;

int main () {
    int i;
    int positives = 0;
    int negatives = 0;
    int zeros = 0;

    int array [6];
    array[0] = 0;
    array[1] = 1;
    array[2] = 2;   
    array[3] = 3;
    array[4] = 4;
    array[5] = 5;

    for (int i = 0; i < 6; i = i + 1) {
        int a = array[i];
        if (a > 0) {
            positives = positives + 1;
        } else if (a < 0) {
            negatives = negatives + 1;
        } else {
            zeros = zeros + 1;
        }
    }

    cout << "positives:" << positives << endl;
    cout << "negatives:" << negatives << endl;
    cout << "zeros:" << zeros << endl;

    return 0;
}