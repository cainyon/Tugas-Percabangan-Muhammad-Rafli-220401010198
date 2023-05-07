#include <iostream>
using namespace std;

int main() {
    // Input umur dan tinggi anak
    int umur, tinggi;
    cout << "Masukkan umur anak: ";
    cin >> umur;
    cout << "Masukkan tinggi anak (dalam cm): ";
    cin >> tinggi;

    // Menghitung tarif sesuai dengan umur dan tinggi anak
    int tarif = 0;
    if (umur < 1) {
        tarif = -1;  // -1 menunjukkan bahwa anak dilarang masuk
    } else if (umur < 3) {
        tarif = 30000;
        if (tinggi > 70) {
            tarif += 10000;
        }
    } else if (umur < 7) {
        tarif = 40000;
        if (tinggi > 120) {
            tarif += 15000;
        }
    } else if (umur < 10) {
        tarif = 50000;
        if (tinggi > 150) {
            tarif += 20000;
        }
    } else {
        tarif = 80000;
    }

    // Output tarif
    if (tarif == -1) {
        cout << "Anak dilarang masuk.\n";
    } else {
        cout << "Tarif untuk anak berumur " << umur << " tahun dengan tinggi " << tinggi << " cm adalah Rp " << tarif << ".\n";
    }

    return 0;
}
