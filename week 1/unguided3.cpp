#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Input: ";
    cin >> n;

    cout << "Output:" << endl;

    for (int i = n; i >= 1; i--) {

        // Spasi agar bentuk pola semakin masuk ke tengah
        for (int spasi = n; spasi > i; spasi--) {
            cout << "  ";
        }

        // Bagian kiri
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }

        // Bintang
        cout << "* ";

        // Bagian kanan
        for (int j = 1; j <= i; j++) {
            cout << j;
            if (j < i) {
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}