#include <iostream>
using namespace std;

int main() {

int firstValue = 10;
int secondValue = 8;

int temp; // Variabel tambahan
temp = firstValue;
firstValue = secondValue;
secondValue = temp;

// Sekarang firstValue akan berisi 8 dan secondValue akan berisi 10

return 0;

}
