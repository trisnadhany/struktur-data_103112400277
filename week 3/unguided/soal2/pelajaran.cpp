
#include <iostream>
#include "pelajaran.h"
using namespace std;

// Implementasi fungsi membuat data pelajaran
pelajaran create_pelajaran(string namapel, string kodepel) {
    pelajaran p;

    p.namaMapel = namapel;
    p.kodeMapel = kodepel;

    return p;
}

// Implementasi prosedur menampilkan data
void tampil_pelajaran(pelajaran p) {
    cout << "nama pelajaran : " << p.namaMapel << endl;
    cout << "nilai : " << p.kodeMapel << endl;
}
