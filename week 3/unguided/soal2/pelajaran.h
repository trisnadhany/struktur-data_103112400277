
#ifndef PELAJARAN_H
#define PELAJARAN_H

#include <string>
using namespace std;

// Deklarasi tipe data ADT Pelajaran
struct pelajaran {
    string namaMapel;
    string kodeMapel;
};

// Deklarasi operasi ADT
pelajaran create_pelajaran(string namapel, string kodepel);
void tampil_pelajaran(pelajaran p);

#endif
