#include <iostream>
using namespace std;

int main() {
    cout << "==========================================" << endl;
    cout << "Data Diri Lengkap" << endl;
    cout << "==========================================" << endl << endl;

    string nama, npm, kelas, cita_cita, motivasi;

    cout << "Nama: ";
    getline(cin, nama);

    cout << "\nNPM: ";
    getline(cin, npm);

    cout << "\nKelas: ";
    getline(cin, kelas);

    cout << "\nCita-Cita: ";
    getline(cin, cita_cita);

    cout << "\nMotivasi Masuk Informatika: ";
    getline(cin, motivasi);

    cout << endl << "==========================================" << endl;
    cout << "Data Diri Lengkap" << endl;
    cout << "==========================================" << endl << endl;

    cout << "Nama: " << nama << endl;
    cout << "NPM: " << npm << endl;
    cout << "Kelas: " << kelas << endl;
    cout << "Cita-Cita: " << cita_cita << endl;
    cout << "Motivasi Masuk Informatika: " << motivasi << endl;

    return 0;
}
