#include <iostream>
using namespace std;

int max3(int a, int b, int c) {
    int terbesar;

    if (a > b) {
        terbesar = a;
    }

    if (b > terbesar) {
        terbesar = b;
    }

    if (c > terbesar) {
        terbesar = c;
    }

    return terbesar;
}

int main() {
    int x, y, z;

    cout << "Masukkan nilai 1: ";
    cin >> x;

    cout << "Masukkan nilai 2: ";
    cin >> y;

    cout << "Masukkan nilai 3: ";
    cin >> z;

    cout << "Nilai terbesar: " << max3(x, y, z) << endl;

    return 0;
}