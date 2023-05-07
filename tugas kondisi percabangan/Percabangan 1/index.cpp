#include <iostream>
#include <string>

using namespace std;

int main() {
    // Mengambil input dari pengguna
    string nama;
    int umur, tabungan;
    string tempatTinggal;

    cout << "Masukkan nama anda: ";
    getline(cin, nama);
    cout << "Masukkan umur anda: ";
    cin >> umur;
    cin.ignore();
    cout << "Masukkan tempat tinggal anda: ";
    getline(cin, tempatTinggal);
    cout << "Masukkan jumlah tabungan anda dalam dollar: ";
    cin >> tabungan;

    // Kondisi untuk menentukan pangkat
    if (umur > 40 && (tempatTinggal == "Nevada" || tempatTinggal == "New York" || tempatTinggal == "Havana") && tabungan > 10000000) {
        cout << nama << " kemungkinan adalah seorang anggota mafia dengan pangkat Don." << endl;
    } else if (umur >= 25 && umur <= 40 && (tempatTinggal == "New Jersey" || tempatTinggal == "Manhattan" || tempatTinggal == "Nevada") && tabungan >= 1000000 && tabungan <= 2000000) {
        cout << nama << " kemungkinan adalah seorang anggota mafia dengan pangkat Underboss." << endl;
    } else if (umur >= 18 && umur <= 24 && (tempatTinggal == "California" || tempatTinggal == "Detroit" || tempatTinggal == "Boston") && tabungan < 1000000) {
        cout << nama << " kemungkinan adalah seorang anggota mafia dengan pangkat Capo." << endl;
    } else {
        cout << nama << " tidak mencurigakan." << endl;
    }

    return 0;
}
