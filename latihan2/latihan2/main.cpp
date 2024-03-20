#include <iostream>
#include <string>

using namespace std;

// Struktur untuk menyimpan data pasien
struct Pasien {
    string nama;
    int umur;
    string jenisKelamin;
};

const int MAX_PASIEN = 100;

// Fungsi untuk menampilkan data pasien
void tampilkanDataPasien(const Pasien& pasien) {
    cout << "Nama: " << pasien.nama << endl;
    cout << "Umur: " << pasien.umur << endl;
    cout << "Jenis Kelamin: " << pasien.jenisKelamin << endl;
    cout << "------------------------" << endl;
}

int main() {
    Pasien daftarPasien[MAX_PASIEN];
    int jumlahPasien = 0;

    // Menu program
    int pilihan;
    do {
        cout << "Menu Program Data Pasien" << endl;
        cout << "1. Input Data Pasien" << endl;
        cout << "2. Tampilkan Data Pasien" << endl;
        cout << "0. Keluar" << endl;
        cout << "Pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                // Input Data Pasien
                cout << "Masukkan Nama Pasien: ";
                cin.ignore(); // Membersihkan buffer
                getline(cin, daftarPasien[jumlahPasien].nama);
                cout << "Masukkan Umur Pasien: ";
                cin >> daftarPasien[jumlahPasien].umur;
                cout << "Masukkan Jenis Kelamin Pasien: ";
                cin >> daftarPasien[jumlahPasien].jenisKelamin;
                jumlahPasien++;
                break;
            case 2:
                // Tampilkan Data Pasien
                if (jumlahPasien > 0) {
                    for (int i = 0; i < jumlahPasien; ++i) {
                        tampilkanDataPasien(daftarPasien[i]);
                    }
                } else {
                    cout << "Belum ada data pasien." << endl;
                }
                break;
        }
    } while (pilihan != 0);

    cout << "Program selesai. Terima kasih!" << endl;

    return 0;
}
