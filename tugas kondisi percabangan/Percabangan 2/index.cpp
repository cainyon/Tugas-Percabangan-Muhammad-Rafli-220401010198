#include <iostream>
#include <string>

using namespace std;

int main() {
  // Input nilai coding dan interview
  int coding;
  string interview;
  cout << "Masukkan nilai coding Anda (0-100): ";
  cin >> coding;
  cout << "Masukkan nilai interview Anda (A, B, C): ";
  cin >> interview;

  // Cek hasil tes coding
  string codingResult;
  if (coding > 80) {
    codingResult = "lolos";
  } else if (coding >= 60 && coding <= 80) {
    codingResult = "dipertimbangkan";
  } else {
    codingResult = "gagal";
  }

  // Cek hasil tes interview
  string interviewResult;
  if (interview == "A" || interview == "B") {
    interviewResult = "lolos";
  } else {
    interviewResult = "gagal";
  }

  // Tampilkan hasil penerimaan calon programmer
  if (codingResult == "lolos"||"dipertimbangkan" && interviewResult == "lolos") {
    cout << "Selamat Kamu Berhasil Menjadi Calon Programmer!" << endl;
  } else {
    cout << "Maaf Kamu Belum Berhasil Menjadi Calon Programmer." << endl;
  }

  return 0;
}
