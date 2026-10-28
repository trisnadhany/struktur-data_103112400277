#include "Singlylist.h"

int main() {
    List L;
    address P1, P2, P3, P4, P5;
    
    createList(L);

    // Memasukkan data sesuai urutan di modul (menggunakan insertFirst)
    // Urutan penyisipan: 2, lalu 0, lalu 8, lalu 12, lalu 9.
    // Sehingga struktur akhir di list dari depan ke belakang: 9 -> 12 -> 8 -> 0 -> 2
    P1 = alokasi(2);
    insertFirst(L, P1);

    P2 = alokasi(0);
    insertFirst(L, P2);

    P3 = alokasi(8);
    insertFirst(L, P3);

    P4 = alokasi(12);
    insertFirst(L, P4);

    P5 = alokasi(9);
    insertFirst(L, P5);

    // Output Latihan No. 2 (Menampilkan isi list)
    cout << "=== Output Singlylist ===" << endl;
    printInfo(L);
    cout << endl;

    // Output Latihan No. 3 (Pencarian elemen 8)
    cout << "=== Output Pencarian 8 ===" << endl;
    address found = findElm(L, 8);
    if (found != Nil) {
        cout << "8 ditemukan dalam list" << endl;
    } else {
        cout << "8 tidak ditemukan dalam list" << endl;
    }
    cout << endl;

    // Output Latihan No. 4 (Total info seluruh elemen)
    cout << "=== Output Total Info Elemen ===" << endl;
    int total = sumInfo(L);
    cout << "Total info dari kelima elemen adalah " << total << endl;

    return 0;
}