#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// fungsi ubah string ke lowercase
string lowerStr(string s) {
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    return s;
}

// Fungsi untuk menghitung rata-rata
float hitungRata(float tugas, float uts, float uas) {
    return (tugas + uts + uas) / 3;
}

// Fungsi untuk menentukan grade
char tentukanGrade(float rata) {
    if (rata >= 85) return 'A';
    else if (rata >= 70) return 'B';
    else if (rata >= 55) return 'C';
    else if (rata >= 40) return 'D';
    else return 'E';
}

// Fungsi untuk menampilkan data
void tampilData(int jumlah, string nama[], string nim[], float tugas[], float uts[], float uas[], float rata[], char grade[]) {
    cout << "\n===== DAFTAR NILAI MAHASISWA =====\n";
    int i = 0;

    while (i < jumlah) {
        cout << "\nData ke-" << i + 1;
        cout << "\nNama      : " << nama[i];
        cout << "\nNIM       : " << nim[i];
        cout << "\nTugas     : " << tugas[i];
        cout << "\nUTS       : " << uts[i];
        cout << "\nUAS       : " << uas[i];
        cout << "\nRata-rata : " << rata[i];
        cout << "\nGrade     : " << grade[i] << endl;
        i++;
    }
}

int main() {
    const int MAX = 100;
    string nama[MAX], nim[MAX];
    float tugas[MAX], uts[MAX], uas[MAX], rata[MAX];
    char grade[MAX];
    int jumlah = 0, pilih;
    char ulang;

    do {
        system("cls"); // bersihkan layar menu

        cout << "\n===== SISTEM MANAJEMEN NILAI MAHASISWA =====";
        cout << "\n1. Input Data Mahasiswa";
        cout << "\n2. Tampilkan Semua Data";
        cout << "\n3. Cari Mahasiswa Berdasarkan NIM";
        cout << "\n4. Update Data";
        cout << "\n5. Hapus Data";
        cout << "\n6. Keluar";
        cout << "\n============================================";
        cout << "\nPilih menu: ";
        cin >> pilih;

        switch (pilih) {
