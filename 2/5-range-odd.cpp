#include <iostream> 
using namespace std;

void range_odd (int start, int end, int arr[]) {
    for (int i = start; i <= end; i++) {
        if (i % 2 != 0) {
            arr[(i - start) / 2] = i;
        }
    }
}

int main () {

    int start = 15;
    int end = 30;
    int size = (end - start) / 2 + 1;
    int arr[size];    

    range_odd (start, end, arr);

    for (int i = 0; i < size; i++)
        cout << arr[i] << endl;

    return 0;
}