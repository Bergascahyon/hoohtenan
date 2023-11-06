#include <iostream>
#include <vector>

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    if (n <= 3) {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return false;
    }
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

std::vector<int> getFactors(int n) {
    std::vector<int> factors;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            factors.push_back(i);
        }
    }
    return factors;
}

int main() {
    int batas;
    std::cout << "Masukkan batas tertentu: ";
    std::cin >> batas;

    std::vector<int> ganjil, genap, prima;

    for (int num = 1; num <= batas; num++) {
        if (num % 2 == 0) {
            genap.push_back(num);
        } else {
            ganjil.push_back(num);
            if (isPrime(num)) {
                prima.push_back(num);
            }
        }
    }

    std::cout << "Bilangan Ganjil: ";
    for (int num : ganjil) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "Bilangan Genap: ";
    for (int num : genap) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "Bilangan Prima: ";
    for (int num : prima) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    int totalGanjil = ganjil.size();
    int totalGenap = genap.size();
    int totalPrima = prima.size();

    std::cout << "Jumlah Bilangan Ganjil: " << totalGanjil << std::endl;
    std::cout << "Jumlah Bilangan Genap: " << totalGenap << std::endl;
    std::cout << "Jumlah Bilangan Prima: " << totalPrima << std::endl;

    int ganjilMax = ganjil.empty() ? 0 : ganjil.back();
    int genapMax = genap.empty() ? 0 : genap.back();
    int primaMax = prima.empty() ? 0 : prima.back();

    std::vector<int> ganjilFactors = getFactors(ganjilMax);
    std::vector<int> genapFactors = getFactors(genapMax);
    std::vector<int> primaFactors = getFactors(primaMax);

    std::cout << "Faktor Bilangan Ganjil Terbesar: ";
    for (int factor : ganjilFactors) {
        std::cout << factor << " ";
    }
    std::cout << std::endl;

    std::cout << "Faktor Bilangan Genap Terbesar: ";
    for (int factor : genapFactors) {
        std::cout << factor << " ";
    }
    std::cout << std::endl;

    std::cout << "Faktor Bilangan Prima Terbesar: ";
    for (int factor : primaFactors) {
        std::cout << factor << " ";
    }
    std::cout << std::endl;

    return 0;
}
