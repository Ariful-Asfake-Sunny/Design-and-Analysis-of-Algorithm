#include <iostream>

using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    
    int result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    // Input a non-negative integer
    int num;
    cout << "Enter a non-negative integer: ";
    cin >> num;

    // Calculate the factorial of the input number
    int result = factorial(num);

    // Output the factorial
    cout << "Factorial of " << num << " is: " << result << endl;

    return 0;
}
