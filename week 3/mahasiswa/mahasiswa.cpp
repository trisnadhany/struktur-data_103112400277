#include <iostream>
#include "mahasiswa.h"

using namespace std;

void inputMhs(mahasiswa &m) {
    cout << "Input nim = ";
    cin >> m.nim;
    cout << "Input nilai1 = ";
    cin >> (m).nilai1;
    cout << "Input nilai2 = ";
    cin >> (m).nilai2;
}

float rata2(mahasiswa m) {
    
    return float((m.nilai1+m.nilai2)/2);
}