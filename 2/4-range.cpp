#include <iostream> 
using namespace std;

 void range (int start, int end, int arr[]) {
    for (int i = 0; i <= end - start; i++) {
        arr[i] = start + i;
    }
}

int main () {
    
    int start = 15;
    int end = 30;
    int size = end - start + 1;
    int arr[size];    

    range (start, end, arr);

    for (int i = 0; i < size; i++)
    cout << arr[i] << endl;

    return 0;
}
