#include <iostream>
#include <vector>
#include <string>

using namespace std;

string baseBExpansion(int n, int b) {
    string expansion = "";
    
    // Handle the case when n is 0
    if (n == 0) {
        expansion = "0";
        return expansion;
    }
    
    // Construct the base b expansion
    while (n > 0) {
        int remainder = n % b;
        
        // Convert remainder to character if greater than 9
        char digit = (remainder < 10) ? (remainder + '0') : (remainder - 10 + 'A');
        
        // Add the digit to the beginning of the expansion
        expansion = digit + expansion;
        
        // Update n by dividing it by b
        n /= b;
    }
    
    return expansion;
}

int main() {
    // Example usage
    int number = 123;
    int base = 2;
    
    // Calculate the base b expansion
    string expansion = baseBExpansion(number, base);
    
    // Output the result
    cout << "Base " << base << " expansion of " << number << " is: " << expansion << endl;
    
    return 0;
}
