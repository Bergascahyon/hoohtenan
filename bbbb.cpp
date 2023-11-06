#include <iostream>
using namespace std;

int main() {
    string namaKaryawan;
    int gajiPokok;

    cout << "Masukkan nama karyawan: ";
    cin.ignore();
    getline(cin, namaKaryawan);

    do {
        cout << "Masukkan gaji pokok (lebih dari 100.000): ";
        cin >> gajiPokok;

        if (gajiPokok <= 100000) {
            cout << "Gaji pokok harus lebih dari 100.000. Silakan coba lagi." << endl;
        }
    } while (gajiPokok <= 100000);

    double tunjangan, pajak, gajiBersih;

    if (gajiPokok > 5000000) {
        tunjangan = 0.2 * gajiPokok;
        pajak = 0.15 * (gajiPokok + tunjangan);
    } else {
        tunjangan = 0.1 * gajiPokok;
        pajak = 0.05 * (gajiPokok + tunjangan);
    }

    gajiBersih = gajiPokok + tunjangan - pajak;

    cout << "Nama Karyawan: " << namaKaryawan << endl;
    cout << "Gaji Pokok: " << gajiPokok << " Rupiah" << endl;
    cout << "Tunjangan: " << tunjangan << " Rupiah" << endl;
    cout << "Pajak: " << pajak << " Rupiah" << endl;
    cout << "Gaji Bersih: " << gajiBersih << " Rupiah" << endl;

    return 0;
}
