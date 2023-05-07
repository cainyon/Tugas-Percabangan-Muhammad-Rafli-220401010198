#include <iostream>
using namespace std;

int main() {
    //input user
    int lari, pushup, plank;
    cout << "Masukkan waktu lari (dalam menit): ";
    cin >> lari;
    cout << "Masukkan waktu push-up (dalam menit): ";
    cin >> pushup;
    cout << "Masukkan waktu plank (dalam menit): ";
    cin >> plank;

    //hitung jumlah kalori yang dibakar
    int kaloriLari = lari * 12;
    int kaloriPushup = pushup * 4;
    int kaloriPlank = plank * 5;
    int totalKalori = kaloriLari + kaloriPushup + kaloriPlank;

    //tampilkan hasil
    cout << "Jumlah kalori yang dibakar adalah " << totalKalori << endl;
    return 0;
}
