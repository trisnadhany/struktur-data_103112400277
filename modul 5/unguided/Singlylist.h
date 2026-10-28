#ifndef SINGLYLIST_H_INCLUDED
#define SINGLYLIST_H_INCLUDED

#include <iostream>

using namespace std;

#define Nil NULL

typedef int infotype;
typedef struct Elmlist *address;

struct Elmlist {
    infotype info;
    address next;
};

struct List {
    address First;
};

// Prototype fungsi dan prosedur sesuai modul
void createList(List &L);
address alokasi(infotype x);
void dealokasi(address &P);
void printInfo(List L);
void insertFirst(List &L, address P);

// Tambahan fungsi untuk Latihan nomor 3 & 4
address findElm(List L, infotype x);
int sumInfo(List L);

#endif // SINGLYLIST_H_INCLUDED