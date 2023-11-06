#include <iostream>
#include <vector>

using namespace std;

// Fungsi untuk mengecek apakah suatu bilangan adalah bilangan prima
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int batas;
    cout << "Masukkan batas: ";
    cin >> batas;

    int jumlahGanjil = 0;
    int jumlahGenap = 0;
    int jumlahPrima = 0;

    vector<int> faktorGanjil;
    vector<int> faktorGenap;
    vector<int> faktorPrima;

    for (int i = 1; i <= batas; i++) {
        if (i % 2 == 0) { // Genap
            jumlahGenap++;
            faktorGenap.push_back(i);
        } else { // Ganjil
            jumlahGanjil++;
            faktorGanjil.push_back(i);
        }

        if (isPrime(i)) { // Prima
            jumlahPrima++;
            faktorPrima.push_back(i);
        }
    }

    // Menampilkan bilangan ganjil
    cout << "Bilangan Ganjil: ";
    for (int num : faktorGanjil) {
        cout << num << " ";
    }
    cout << endl;
    cout << "Jumlah Bilangan Ganjil: " << jumlahGanjil << endl;

    // Menampilkan bilangan genap
    cout << "Bilangan Genap: ";
    for (int num : faktorGenap) {
        cout << num << " ";
    }
    cout << endl;
    cout << "Jumlah Bilangan Genap: " << jumlahGenap << endl;

    // Menampilkan bilangan prima
    cout << "Bilangan Prima: ";
    for (int num : faktorPrima) {
        cout << num << " ";
    }
    cout << endl;
    cout << "Jumlah Bilangan Prima: " << jumlahPrima << endl;

    return 0;
}
