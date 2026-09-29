#include <iostream>
using namespace std;

int main() {
    int angka;

    cout << "Masukkan angka (0 - 100): ";
    cin >> angka;

    string satuan[] = {
        "nol", "satu", "dua", "tiga", "empat",
        "lima", "enam", "tujuh", "delapan", "sembilan"
    };

    if (angka < 0 || angka > 100) {
        cout << "Angka harus antara 0 sampai 100." << endl;
    }
    else if (angka < 10) {
        cout << satuan[angka] << endl;
    }
    else if (angka == 10) {
        cout << "sepuluh" << endl;
    }
    else if (angka == 11) {
        cout << "sebelas" << endl;
    }
    else if (angka < 20) {
        cout << satuan[angka - 10] << " belas" << endl;
    }
    else if (angka < 100) {
        cout << satuan[angka / 10] << " puluh";

        if (angka % 10 != 0) {
            cout << " " << satuan[angka % 10];
        }

        cout << endl;
    }
    else {
        cout << "seratus" << endl;
    }

    return 0;
}