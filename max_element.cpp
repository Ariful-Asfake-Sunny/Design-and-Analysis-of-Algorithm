#include <iostream>
#include <vector>

using namespace std;

int findMax(const vector<int>& sequence) {
    // Initialize max_element with the first element of the sequence
    int max_element = sequence[0];
    
    // Iterate through the sequence
    for (int i = 1; i < sequence.size(); ++i) {
        // Compare current element with max_element
        if (sequence[i] > max_element) {
            // Update max_element if current element is greater
            max_element = sequence[i];
        }
    }
    
    return max_element;
}

int main() {
    // Example usage
    vector<int> sequence = {3, 7, 1, 9, 4, 6, 8, 2};
    
    // Find the maximum element
    int max_element = findMax(sequence);
    
    // Output the result
    cout << "The maximum element is: " << max_element << endl;
    
    return 0;
}
