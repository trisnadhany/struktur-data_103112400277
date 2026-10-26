
#include <iostream>
#include "Singlylist.h"
using namespace std;

int main() {
    List L;
    address P1, P2, P3, P4, P5;
    address P, Prec;

    createList(L);

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

    // Menghapus node 9
    deleteFirst(L, P);
    dealokasi(P);

    // Menghapus node 2
    deleteLast(L, P);
    dealokasi(P);

    // Menghapus node 8
    Prec = L.First;
    deleteAfter(L, Prec, P);
    dealokasi(P);

    // Menampilkan sisa node
    printInfo(L);
    cout << "Jumlah node : " << nbList(L) << endl;

    // Menghapus seluruh node
    deleteList(L);

    cout << endl;
    cout << "- List Berhasil Terhapus -" << endl;
    cout << "Jumlah node : " << nbList(L) << endl;

    return 0;
}
