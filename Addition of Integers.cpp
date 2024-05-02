#include <iostream>

using namespace std;

int addIntegers(int a, int b) {
    return a + b;
}

int main() {
    // Input the integers to be added
    int num1, num2;
    cout << "Enter first integer: ";
    cin >> num1;
    cout << "Enter second integer: ";
    cin >> num2;

    // Perform addition
    int sum = addIntegers(num1, num2);

    // Output the result
    cout << "Sum of " << num1 << " and " << num2 << " is: " << sum << endl;

    return 0;
}
