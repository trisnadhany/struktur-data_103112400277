
#ifndef LISTBUAH_H
#define LISTBUAH_H

#include <iostream>
#include <string>
using namespace std;

#define Nil NULL

// Struktur data buah
struct dataBuah {
    string nama;
    int jumlah;
    float harga;
};

// Struktur node
typedef struct elmList *address;

struct elmList {
    dataBuah isidata;
    address next;
};

// Struktur linked list
struct linkedlist {
    address first;
};

// Membuat list
void createList(linkedlist &L);

// Alokasi node
address alokasi(string nama, int jumlah, float harga);

// Insert
void insertFirst(linkedlist &L, address P);
void insertLast(linkedlist &L, address P);
void insertAfter(linkedlist &L, address P, address Prec);

// Menampilkan list
void printList(linkedlist L);

// Menghitung jumlah node
int nbList(linkedlist L);

// Update
void updateFirst(linkedlist &L);
void updateLast(linkedlist &L);
void updateAfter(linkedlist &L, address Prec);

// Find
void FindNodeByData(linkedlist L, string nama);
void FindNodeByAddress(linkedlist L, address P);
void FindNodeByRange(linkedlist L, float minHarga, float maxHarga);

// Delete
void delFirst(linkedlist &L);
void delLast(linkedlist &L);
void delAfter(linkedlist &L, address P, address Prec);

// Menghapus seluruh list
void deleteList(linkedlist &L);

#endif
