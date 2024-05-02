#include <iostream>

using namespace std;

int multiplyIntegers(int a, int b) {
    return a * b;
}

int main() {
    // Input the integers to be multiplied
    int num1, num2;
    cout << "Enter first integer: ";
    cin >> num1;
    cout << "Enter second integer: ";
    cin >> num2;

    // Perform multiplication
    int product = multiplyIntegers(num1, num2);

    // Output the result
    cout << "Product of " << num1 << " and " << num2 << " is: " << product << endl;

    return 0;
}
