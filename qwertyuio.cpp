#include <iostream>

using namespace std;

int main() {
    const double hargaArmagedon = 35000.0;
    const double hargaDisneyLand = 45000.0;
    const double hargaToyStory = 60000.0;

    int kodeFilm, jumlahPembelian;
    char lanjut;

    do {
        cout << "KODE FILM\tNAMA FILM\tHARGA TIKET" << endl;
        cout << "1\t\tArmagedon\tRp. 35,000" << endl;
        cout << "2\t\tDisneyLand\tRp. 45,000" << endl;
        cout << "3\t\tToyStory\tRp. 60,000" << endl;

        cout << "Masukkan kode Film (1-3): ";
        cin >> kodeFilm;

        if (kodeFilm < 1 || kodeFilm > 3) {
            cout << "Kode film yang Anda tulis tidak valid." << endl;
            continue;
        }

        cout << "Masukkan jumlah pembelian tiket: ";
        cin >> jumlahPembelian;

        double hargaTiket = 0.0;
        string namaFilm;

        switch (kodeFilm) {
            case 1:
                namaFilm = "Armagedon";
                hargaTiket = hargaArmagedon;
                break;
            case 2:
                namaFilm = "DisneyLand";
                hargaTiket = hargaDisneyLand;
                break;
            case 3:
                namaFilm = "ToyStory";
                hargaTiket = hargaToyStory;
                break;
        }

        double totalHarga = hargaTiket * jumlahPembelian;

        if (jumlahPembelian > 5) {
            double diskon = 0.4 * totalHarga;
            totalHarga -= diskon;
        }

        cout << "Nama Film: " << namaFilm << endl;
        cout << "Harga Tiket Rp: " << fixed << setprecision(2) << hargaTiket << endl;
        cout << "Jumlah pembelian: " << jumlahPembelian << " tiket" << endl;
        cout << "Harga setelah diskon: Rp. " << fixed << setprecision(2) << totalHarga << endl;

        cout << "Apakah anda ingin memesan tiket lagi? (Y/N): ";
        cin >> lanjut;
    } while (lanjut == 'Y' || lanjut == 'y');

    cout << "Terimakasih Sudah Memesan tiket Film" << endl;

    return 0;
}
