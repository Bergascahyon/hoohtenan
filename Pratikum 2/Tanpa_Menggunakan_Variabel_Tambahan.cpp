#include <iostream>

using namespace std;

int main(){

int firstValue = 10;
int secondValue = 8;

firstValue = firstValue ^ secondValue;
secondValue = firstValue ^ secondValue;
firstValue = firstValue ^ secondValue;

// Sekarang firstValue akan berisi 8 dan secondValue akan berisi 10

return 0;

}
