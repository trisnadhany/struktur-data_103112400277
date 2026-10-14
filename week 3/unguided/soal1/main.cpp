
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// ADT Mahasiswa
struct Mahasiswa {
    string nama;
    string nim;
    float uts;
    float uas;
    float tugas;
    float nilaiAkhir;
};

// Fungsi menghitung nilai akhir
float hitungNilaiAkhir(float uts, float uas, float tugas) {
    return (0.3f * uts) + (0.4f * uas) + (0.3f * tugas);
}

// Prosedur memasukkan data mahasiswa
void inputMahasiswa(Mahasiswa &m) {
    cout << "Nama mahasiswa : ";
    getline(cin >> ws, m.nama);

    cout << "NIM            : ";
    cin >> m.nim;

    cout << "Nilai UTS      : ";
    cin >> m.uts;

    cout << "Nilai UAS      : ";
    cin >> m.uas;

    cout << "Nilai Tugas    : ";
    cin >> m.tugas;

    m.nilaiAkhir = hitungNilaiAkhir(
        m.uts, m.uas, m.tugas
    );
}

// Prosedur menampilkan data mahasiswa
void tampilkanMahasiswa(const Mahasiswa &m) {
    cout << fixed << setprecision(2);
    cout << "Nama        : " << m.nama << endl;
    cout << "NIM         : " << m.nim << endl;
    cout << "UTS         : " << m.uts << endl;
    cout << "UAS         : " << m.uas << endl;
    cout << "Tugas       : " << m.tugas << endl;
    cout << "Nilai Akhir : " << m.nilaiAkhir << endl;
}

int main() {
    Mahasiswa mahasiswa[10];
    int jumlah;

    cout << "=== PROGRAM DATA MAHASISWA ===" << endl;
    cout << "Jumlah mahasiswa (maks. 10): ";
    cin >> jumlah;

    if (jumlah < 1 || jumlah > 10) {
        cout << "Jumlah harus antara 1 sampai 10."
             << endl;
        return 1;
    }

    for (int i = 0; i < jumlah; i++) {
        cout << "\nData mahasiswa ke-" << i + 1 << endl;
        inputMahasiswa(mahasiswa[i]);
    }

    cout << "\n=== DAFTAR NILAI MAHASISWA ===" << endl;

    for (int i = 0; i < jumlah; i++) {
        cout << "\nMahasiswa ke-" << i + 1 << endl;
        tampilkanMahasiswa(mahasiswa[i]);
    }

    return 0;
}
