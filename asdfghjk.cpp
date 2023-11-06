#include <iostream>
using namespace std;

int main() {
    int kodeFilm;
    int hargaTiket;
    int jumlahPembelian;
    char pesanLagi;
    double totalHarga = 0;

    do {
        cout << "KODE FILM\tNAMA FILM\tHARGA TIKET" << endl;
        cout << "1\t\tArmagedon\tRp. 35.000" << endl;
        cout << "2\t\tDisneyLand\tRp. 45.000" << endl;
        cout << "3\t\tToyStory\tRp. 60.000" << endl;

        do {
            cout << "Masukkan kode Film (1-3): ";
            cin >> kodeFilm;
            switch (kodeFilm) {
                case 1:
                    hargaTiket = 35000;
                    break;
                case 2:
                    hargaTiket = 45000;
                    break;
                case 3:
                    hargaTiket = 60000;
                    break;
                default:
                    cout << "Kode film yang Anda tuliskan tidak valid." << endl;
            }
        } while (kodeFilm < 1 || kodeFilm > 3);

        cout << "Masukkan jumlah pembelian: ";
        cin >> jumlahPembelian;

        int hargaSebelumDiskon = hargaTiket * jumlahPembelian;
        double hargaSetelahDiskon;

        if (jumlahPembelian > 5) {
            hargaSetelahDiskon = hargaSebelumDiskon * 0.6; // Diskon 40%
        } else {
            hargaSetelahDiskon = hargaSebelumDiskon;
        }

        cout << "Nama Film: ";
        switch (kodeFilm) {
            case 1:
                cout << "Armagedon";
                break;
            case 2:
                cout << "DisneyLand";
                break;
            case 3:
                cout << "ToyStory";
                break;
        }
        cout << endl;

        cout << "Harga Tiket Rp: " << hargaTiket << endl;
        cout << "Jumlah pembelian: " << jumlahPembelian << " tiket" << endl;
        cout << "Harga setelah diskon: Rp. " << hargaSetelahDiskon << endl;

        totalHarga += hargaSetelahDiskon;

        cout << "Apakah anda ingin memesan tiket lagi? (Y/N): ";
        cin >> pesanLagi;
    } while (pesanLagi == 'Y' || pesanLagi == 'y');

    cout << "Terima kasih Sudah Memesan tiket Film" << endl;
    cout << "Total harga yang harus dibayar: Rp. " << totalHarga << endl;

    return 0;
}
