
#include <iostream>
#include "Doublylist.h"
using namespace std;

int main() {
    list L;
    infotype x;
    address P, Q;

    CreateList(L);

    int jumlah;

    cout << "Masukkan jumlah kendaraan: ";
    cin >> jumlah;

    for (int i = 0; i < jumlah; i++) {
        cout << "\nMasukkan nomor polisi: ";
        cin >> x.nopol;

        cout << "Masukkan warna kendaraan: ";
        cin >> x.warna;

        cout << "Masukkan tahun kendaraan: ";
        cin >> x.thnBuat;

        P = alokasi(x);
        insertLast(L, P);
    }

    cout << "\nDATA LIST 1" << endl;
    printInfo(L);

    // Latihan 2: Mencari kendaraan D001
    cout << "\n=== PENCARIAN KENDARAAN ===" << endl;

    x.nopol = "D001";
    P = findElm(L, x);

    if (P != nullptr) {
        cout << "Nomor Polisi : " << P->info.nopol << endl;
        cout << "Warna        : " << P->info.warna << endl;
        cout << "Tahun        : " << P->info.thnBuat << endl;
    } else {
        cout << "Data kendaraan tidak ditemukan!" << endl;
    }

    // Latihan 3: Menghapus kendaraan D003
    cout << "\n=== PENGHAPUSAN KENDARAAN ===" << endl;

    x.nopol = "D003";
    P = findElm(L, x);

    if (P != nullptr) {
        if (P == L.first) {
            deleteFirst(L, Q);
        } else if (P == L.last) {
            deleteLast(L, Q);
        } else {
            deleteAfter(P->prev, Q);
        }

        dealokasi(Q);
        cout << "Data kendaraan D003 berhasil dihapus!" << endl;
    } else {
        cout << "Data kendaraan D003 tidak ditemukan!" << endl;
    }

    cout << "\nDATA LIST SETELAH PENGHAPUSAN" << endl;
    printInfo(L);

    // Menghapus seluruh data sebelum program selesai
    while (L.first != nullptr) {
        deleteFirst(L, P);
        dealokasi(P);
    }

    return 0;
}
