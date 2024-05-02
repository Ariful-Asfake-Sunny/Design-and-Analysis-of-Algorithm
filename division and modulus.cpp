#include <iostream>

using namespace std;

int main() {
    // Input the integers
    int dividend, divisor;
    cout << "Enter the dividend: ";
    cin >> dividend;
    cout << "Enter the divisor: ";
    cin >> divisor;

    // Check if divisor is not zero
    if (divisor != 0) {
        // Compute division
        int quotient = dividend / divisor;

        // Compute modulus
        int remainder = dividend % divisor;

        // Output the results
        cout << "Division result: " << quotient << endl;
        cout << "Modulus result: " << remainder << endl;
    } else {
        // Output error message if divisor is zero
        cout << "Error: Division by zero is not allowed." << endl;
    }

    return 0;
}
