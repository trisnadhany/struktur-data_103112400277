#include <iostream>
using namespace std;

int main() {
    char arr[6];

    arr[0] = 'A';
    arr[1] = 'B';
    arr[2] = 'C';
    arr[3] = 'D';
    arr[4] = 'E';
    arr[5] = 'F';

    cout << arr[3] << endl; 
    cout << &arr[4] << endl; 

    return 0;
}