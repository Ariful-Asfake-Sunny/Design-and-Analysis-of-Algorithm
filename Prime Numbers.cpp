#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n) {
    if (n < 2) {
        return false;
    }

    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    // Input an integer
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    // Check if the number is prime
    if (isPrime(num)) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }

    return 0;
}
