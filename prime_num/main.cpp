#include <iostream>
using namespace std;

void primeNumber() {
    int n = 1000;
    bool isPrime;

    for (int num = 2; num < n; num++) {
        isPrime = true;

        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
            }
        }

        if (isPrime) {
            cout << "Is prime: " << num << "\n";
        } else {
            cout << "Is not a prim: " << num << "\n";
        }
    }

}

int main() {
    primeNumber();
    return 0;
}