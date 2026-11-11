
#include "Doublylist.h"

void CreateList(list &L) {
    L.first = nullptr;
    L.last = nullptr;
}

address alokasi(infotype x) {
    address P = new elmlist;
    P->info = x;
    P->next = nullptr;
    P->prev = nullptr;
    return P;
}

void dealokasi(address &P) {
    delete P;
    P = nullptr;
}

void insertLast(list &L, address P) {
    address Q = L.first;

    while (Q != nullptr) {
        if (Q->info.nopol == P->info.nopol) {
            cout << "Nomor polisi sudah terdaftar!" << endl;
            dealokasi(P);
            return;
        }
        Q = Q->next;
    }

    if (L.first == nullptr) {
        L.first = P;
        L.last = P;
    } else {
        P->prev = L.last;
        L.last->next = P;
        L.last = P;
    }
}

void printInfo(list L) {
    address P = L.first;

    if (P == nullptr) {
        cout << "List kosong!" << endl;
        return;
    }

    while (P != nullptr) {
        cout << "Nomor Polisi : " << P->info.nopol << endl;
        cout << "Warna        : " << P->info.warna << endl;
        cout << "Tahun        : " << P->info.thnBuat << endl;
        cout << endl;

        P = P->next;
    }
}

address findElm(list L, infotype x) {
    address P = L.first;

    while (P != nullptr) {
        if (P->info.nopol == x.nopol) {
            return P;
        }
        P = P->next;
    }

    return nullptr;
}

void deleteFirst(list &L, address &P) {
    if (L.first == nullptr) {
        P = nullptr;
        return;
    }

    P = L.first;

    L.first = L.first->next;

    if (L.first != nullptr) {
        L.first->prev = nullptr;
    } else {
        L.last = nullptr;
    }

    P->next = nullptr;
    P->prev = nullptr;
}

void deleteLast(list &L, address &P) {
    if (L.last == nullptr) {
        P = nullptr;
        return;
    }

    P = L.last;

    L.last = L.last->prev;

    if (L.last != nullptr) {
        L.last->next = nullptr;
    } else {
        L.first = nullptr;
    }

    P->next = nullptr;
    P->prev = nullptr;
}

void deleteAfter(address Prec, address &P) {
    if (Prec == nullptr || Prec->next == nullptr) {
        P = nullptr;
        return;
    }

    P = Prec->next;
    Prec->next = P->next;

    if (P->next != nullptr) {
        P->next->prev = Prec;
    }

    P->next = nullptr;
    P->prev = nullptr;
}
