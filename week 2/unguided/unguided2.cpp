#include <iostream>
using namespace std;

// Fungsi menggunakan pointer
void tukarPointer(int *a, int *b, int *c) {
    int temp;

    temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}

// Fungsi menggunakan reference
void tukarReference(int &a, int &b, int &c) {
    int temp;

    temp = a;
    a = b;
    b = c;
    c = temp;
}

int main() {
    int a, b, c;

    cout << "Masukkan nilai a : ";
    cin >> a;

    cout << "Masukkan nilai b : ";
    cin >> b;

    cout << "Masukkan nilai c : ";
    cin >> c;

    cout << "\n=== SEBELUM DITUKAR ===" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    // Pointer
    int pA = a;
    int pB = b;
    int pC = c;

    tukarPointer(&pA, &pB, &pC);

    cout << "\n=== HASIL DENGAN POINTER ===" << endl;
    cout << "a = " << pA << endl;
    cout << "b = " << pB << endl;
    cout << "c = " << pC << endl;

    // Reference
    tukarReference(a, b, c);

    cout << "\n=== HASIL DENGAN REFERENCE ===" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    return 0;
}