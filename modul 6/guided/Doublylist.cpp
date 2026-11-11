#include <iostream>
#include <iomanip>
#include <string>
#include "Doublylist.h"

using namespace std;

void CreateList(list &L) {
    L.first = nullptr;
    L.last = nullptr;
}

address alokasi(const infotype &x) {
    address P = new elmlist;
    P->info = x;
    P->prev = nullptr;
    P->next = nullptr;
    return P;
}

void dealokasi(address &P) {
    if (P != nullptr) {
        delete P;
        P = nullptr;
    }
}

void insertFirst(list &L, address P) {
    if (P == nullptr) return;

    P->prev = nullptr;
    P->next = L.first;

    if (L.first != nullptr)
        L.first->prev = P;
    else
        L.last = P;

    L.first = P;
}

void insertLast(list &L, address P) {
    if (P == nullptr) return;

    P->next = nullptr;
    P->prev = L.last;

    if (L.last != nullptr)
        L.last->next = P;
    else
        L.first = P;

    L.last = P;
}

void insertAfter(list &L, address R, address P) {
    if (R == nullptr || P == nullptr) return;

    P->prev = R;
    P->next = R->next;

    if (R->next != nullptr)
        R->next->prev = P;
    else
        L.last = P;

    R->next = P;
}

void insertBefore(list &L, address R, address P) {
    if (R == nullptr || P == nullptr) return;

    P->next = R;
    P->prev = R->prev;

    if (R->prev != nullptr)
        R->prev->next = P;
    else
        L.first = P;

    R->prev = P;
}

void printInfo(const list &L) {
    address P = L.first;

    if (P == nullptr) {
        cout << "List kosong.\n";
        return;
    }

    cout << "+--------------------------------+\n";
    cout << "| Kode   | Nama       | Tahun    |\n";
    cout << "+--------------------------------+\n";

    while (P != nullptr) {
        cout << "| " << left << setw(6) << P->info.kode
             << " | " << setw(10) << P->info.nama
             << " | " << setw(8) << P->info.tahun
             << " |\n";
        P = P->next;
    }

    cout << "+--------------------------------+\n";
}

address findElm(const list &L, const string &kode) {
    address P = L.first;

    while (P != nullptr) {
        if (P->info.kode == kode)
            return P;

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

    if (L.first != nullptr)
        L.first->prev = nullptr;
    else
        L.last = nullptr;

    P->prev = nullptr;
    P->next = nullptr;
}

void deleteLast(list &L, address &P) {
    if (L.last == nullptr) {
        P = nullptr;
        return;
    }

    P = L.last;
    L.last = L.last->prev;

    if (L.last != nullptr)
        L.last->next = nullptr;
    else
        L.first = nullptr;

    P->prev = nullptr;
    P->next = nullptr;
}

void deleteAfter(list &L, address prec, address &P) {
    P = nullptr;

    if (prec == nullptr || prec->next == nullptr)
        return;

    P = prec->next;
    prec->next = P->next;

    if (P->next != nullptr)
        P->next->prev = prec;
    else
        L.last = prec;

    P->prev = nullptr;
    P->next = nullptr;
}

void deleteBefore(list &L, address succ, address &P) {
    P = nullptr;

    if (succ == nullptr || succ->prev == nullptr)
        return;

    P = succ->prev;
    succ->prev = P->prev;

    if (P->prev != nullptr)
        P->prev->next = succ;
    else
        L.first = succ;

    P->prev = nullptr;
    P->next = nullptr;
}