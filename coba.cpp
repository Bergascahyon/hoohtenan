#include <iostream>

int main() {
    int score;
    std::cout << "Masukkan nilai score:80";
    std::cin >> score;


    if (score >= 90) {
        std::cout << "Selamat! Anda mendapatkan nilai A." << std::endl;
    }

    else if (score >= 80) {
        std::cout << "Anda mendapatkan nilai B." << std::endl;
    }

    else if (score >= 70) {
        std::cout << "Anda mendapatkan nilai C." << std::endl;
    }

    else if (score >= 60) {
        std::cout << "Anda mendapatkan nilai D." << std::endl;
    }

    else {
        std::cout << "Anda mendapatkan nilai E." << std::endl;
    }

    return 0;
}
