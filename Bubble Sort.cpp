#include <iostream>
#include <vector>

using namespace std;

void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    // Input a sequence of numbers
    vector<int> nums = {5, 3, 8, 1, 9, 2};
    
    // Sort the sequence using bubble sort
    bubbleSort(nums);

    // Output the sorted sequence
    cout << "Sorted sequence:";
    for (int num : nums) {
        cout << " " << num;
    }
    cout << endl;

    return 0;
}
