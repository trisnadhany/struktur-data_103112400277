#include "Singlylist.h"

// Membuat list kosong
void createList(List &L) {
    L.First = Nil;
}

// Alokasi memori untuk elemen baru
address alokasi(infotype x) {
    address P = new Elmlist;
    if (P != Nil) {
        P->info = x;
        P->next = Nil;
    }
    return P;
}

// Dealokasi memori elemen
void dealokasi(address &P) {
    delete P;
    P = Nil;
}

// Menampilkan seluruh info di dalam list
void printInfo(List L) {
    address P = L.First;
    while (P != Nil) {
        cout << P->info << " ";
        P = P->next;
    }
    cout << endl;
}

// Menambahkan elemen di awal list (First)
void insertFirst(List &L, address P) {
    P->next = L.First;
    L.First = P;
}

// Mencari elemen dengan nilai info tertentu (Latihan No. 3)
address findElm(List L, infotype x) {
    address P = L.First;
    while (P != Nil) {
        if (P->info == x) {
            return P;
        }
        P = P->next;
    }
    return Nil;
}

// Menghitung total penjumlahan seluruh info elemen (Latihan No. 4)
int sumInfo(List L) {
    address P = L.First;
    int total = 0;
    while (P != Nil) {
        total += P->info;
        P = P->next;
    }
    return total;
}