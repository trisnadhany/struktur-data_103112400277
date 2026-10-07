#include <iostream>
using namespace std;

void tukar(int &a, int &b) {
    int temp;

    temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10;
    int y = 20;

    cout << "Sebelum ditukar:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    tukar(x, y);

    cout << endl;
    cout << "Sesudah ditukar:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}