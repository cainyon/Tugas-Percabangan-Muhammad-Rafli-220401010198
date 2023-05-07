#include <iostream>
using namespace std;

int main() {
  // input user
  int nomorPunggung;
  cout << "masukkan nomor punggung: ";
  cin >> nomorPunggung;
  // posisi pemain berdasarkan nomor punggung
  string posisi = "";
  if (nomorPunggung % 2 == 0) {
    posisi += "target attacker";
    if (nomorPunggung >= 50 && nomorPunggung <= 100) {
      posisi += " dan berhak dipilih sebagai capten team";
    }
  } else {
    posisi += "defender";
    if (nomorPunggung % 3 == 0 && nomorPunggung % 5 == 0) {
      posisi += "keeper";
    } else if (nomorPunggung % 2 == 1 && nomorPunggung > 90) {
      posisi = "playmaker";
    }
  }

  // tampilkan posisi
  if (posisi == "") {
    cout << "nomor punggung tidak valid" << endl;
  } else {
    cout << "posisi pemain adalah: " << posisi << endl;
  }

  return 0;
}