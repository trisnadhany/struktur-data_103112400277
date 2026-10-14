
#include <iostream>
using namespace std;

// ADT Data
struct Data {
    int A[3][3];
    int B[3][3];

    int x;
    int y;

    int *p;
    int *q;
};

// Mengisi array dan mengatur pointer
void isiData(Data &d) {
    int nilaiA = 1;
    int nilaiB = 10;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            d.A[i][j] = nilaiA++;
            d.B[i][j] = nilaiB++;
        }
    }

    d.x = 100;
    d.y = 200;

    d.p = &d.x;
    d.q = &d.y;
}

// Menampilkan array 2D
void tampilArray(int arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

// Menukar elemen dua array pada posisi tertentu
void tukarElemen(
    int A[3][3],
    int B[3][3],
    int baris,
    int kolom
) {
    int sementara = A[baris][kolom];
    A[baris][kolom] = B[baris][kolom];
    B[baris][kolom] = sementara;
}

// Menukar nilai yang ditunjuk oleh dua pointer
void tukarPointer(int *p, int *q) {
    int sementara = *p;
    *p = *q;
    *q = sementara;
}

int main() {
    Data d;
    isiData(d);

    cout << "=== ARRAY A ===" << endl;
    tampilArray(d.A);

    cout << "\n=== ARRAY B ===" << endl;
    tampilArray(d.B);

    int baris, kolom;

    cout << "\nMasukkan posisi baris (0-2): ";
    cin >> baris;

    cout << "Masukkan posisi kolom (0-2): ";
    cin >> kolom;

    if (baris < 0 || baris > 2 ||
        kolom < 0 || kolom > 2) {
        cout << "Posisi tidak valid!" << endl;
        return 1;
    }

    tukarElemen(d.A, d.B, baris, kolom);

    cout << "\n=== ARRAY SETELAH PERTUKARAN ===" << endl;

    cout << "\nArray A:" << endl;
    tampilArray(d.A);

    cout << "\nArray B:" << endl;
    tampilArray(d.B);

    cout << "\n=== PERTUKARAN POINTER ===" << endl;

    cout << "Sebelum ditukar:" << endl;
    cout << "x = " << *d.p << endl;
    cout << "y = " << *d.q << endl;

    tukarPointer(d.p, d.q);

    cout << "\nSesudah ditukar:" << endl;
    cout << "x = " << d.x << endl;
    cout << "y = " << d.y << endl;

    return 0;
}
