#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah bilangan dalam deret Fibonacci: ";
    cin >> n;

    int a = 0; // Bilangan pertama dalam deret Fibonacci
    int b = 1; // Bilangan kedua dalam deret Fibonacci

    cout << "Deret Fibonacci dengan " << n << " bilangan: ";

    for (int i = 0; i < n; i++) {
        cout << a << " ";

        int next = a + b;
        a = b;
        b = next;
    }

    cout << endl;

    return 0;
}
