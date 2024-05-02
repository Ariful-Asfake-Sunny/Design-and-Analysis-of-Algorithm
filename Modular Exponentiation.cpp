#include <iostream>

using namespace std;

int modularExponentiation(int base, int exponent, int modulus) {
    int result = 1;
    base %= modulus; // Take modulo of base to handle large values

    while (exponent > 0) {
        // If exponent is odd, multiply result by base modulo modulus
        if (exponent & 1) {
            result = (result * base) % modulus;
        }
        // Reduce exponent by half
        exponent >>= 1;
        // Square base modulo modulus
        base = (base * base) % modulus;
    }

    return result;
}

int main() {
    // Input base, exponent, and modulus
    int base, exponent, modulus;
    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exponent;
    cout << "Enter the modulus: ";
    cin >> modulus;

    // Calculate modular exponentiation
    int result = modularExponentiation(base, exponent, modulus);

    // Output the result
    cout << "Result of modular exponentiation: " << result << endl;

    return 0;
}
