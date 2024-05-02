#include <iostream>

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

int main() {
    // Input two integers
    int num1, num2;
    cout << "Enter first integer: ";
    cin >> num1;
    cout << "Enter second integer: ";
    cin >> num2;

    // Find the GCD
    int result = gcd(num1, num2);

    // Output the GCD
    cout << "GCD of " << num1 << " and " << num2 << " is: " << result << endl;

    return 0;
}
