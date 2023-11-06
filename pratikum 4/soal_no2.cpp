#include <iostream>

using namespace std;

int main() {
    int tinggi;

    cout << "Masukkan tinggi segitiga: ";
    cin >> tinggi;

    for (int i = 1; i <= tinggi; i++) {
        // Membuat spasi untuk pembentukan segitiga
        for (int j = 1; j <= tinggi - i; j++) {
            cout << " ";
        }

        // Menampilkan bintang untuk bagian segitiga
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
