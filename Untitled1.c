#include <iostream>

using namespace std;

int main(){

    int firstValue = 10;
    int secondValue = 8;

    // Tukar nilai kedua variable menggunakan temp (variable tambahan)

    int temp = firstValue;
    firstValue = secondValue;
    secondValue = temp;

    // Outpout Penukaran kedua variabel dengan temp
    cout << "First Value: " << firstValue << endl;
    cout << "Second Value: " << secondValue << endl << endl;

    int nilaiPertama = 10;
    int nilaiKedua = 8;

    // Tukar Value Kedua Variable tanpa temp (variable tambahan)
    nilaiPertama = nilaiPertama + nilaiKedua;
    nilaiKedua = nilaiPertama - nilaiKedua;
    nilaiPertama = nilaiPertama - nilaiKedua;

    // Outpout Penukaran kedua variabel tanpa temp
    cout << "Nilai Pertama: " << nilaiPertama << endl;
    cout << "Nilai Kedua: " << nilaiKedua << endl << endl;

    int N, M;

    cout << "Ekor Bebek milik Pak Tatang: ";
    cin >> N;

    cout << "Dibagikan ke temannya: ";
    cin >> M;

    int jumlah_bebek_yang_dibagikan = N / M;
    int sisa_bebek = N % M;

    cout << "Jumlah bebek yang harus dibagikan ke masing masing temannya: " << jumlah_bebek_yang_dibagikan << endl;
    cout << "Jumlah sisanya: " << sisa_bebek << endl;

    return 0;
}
