#include <iostream>

using namespace std;

void generateFibonacci(int num_fib) {
    // Initialize variables for the first two Fibonacci numbers
    int fib1 = 0, fib2 = 1;

    // Output the first two Fibonacci numbers
    cout << fib1 << " " << fib2 << " ";

    // Generate remaining Fibonacci numbers
    for (int count = 2; count < num_fib; ++count) {
        int next_fib = fib1 + fib2;
        cout << next_fib << " ";
        fib1 = fib2;
        fib2 = next_fib;
    }
}

int main() {
    // Input the number of Fibonacci numbers to generate
    int num_fib;
    cout << "Enter the number of Fibonacci numbers to generate: ";
    cin >> num_fib;

    // Generate Fibonacci numbers
    cout << "Fibonacci numbers: ";
    generateFibonacci(num_fib);

    return 0;
}
