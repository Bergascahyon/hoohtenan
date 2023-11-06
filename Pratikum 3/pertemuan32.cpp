#include <iostream>
using namespace std;

int main() {
    double angka1, angka2, angka3;

    // Meminta pengguna memasukkan tiga angka
    cout << "Masukkan angka pertama: ";
    cin >> angka1;
    cout << "Masukkan angka kedua: ";
    cin >> angka2;
    cout << "Masukkan angka ketiga: ";
    cin >> angka3;

    // Mencari angka terbesar
    double terbesar = angka1;

    if (angka2 > terbesar) {
        terbesar = angka2;
    }

    if (angka3 > terbesar) {
        terbesar = angka3;
    }

    // Mencetak angka terbesar
    cout << "Angka terbesar di antara ketiganya adalah: " << terbesar << endl;

    return 0;
}
