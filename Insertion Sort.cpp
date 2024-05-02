#include <iostream>
#include <vector>

using namespace std;

void insertionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; ++i) {
        int current = arr[i];
        int position = i;

        while (position > 0 && arr[position - 1] > current) {
            arr[position] = arr[position - 1];
            --position;
        }

        arr[position] = current;
    }
}

int main() {
    // Input a sequence of numbers
    vector<int> nums = {5, 3, 8, 1, 9, 2};
    
    // Sort the sequence using insertion sort
    insertionSort(nums);

    // Output the sorted sequence
    cout << "Sorted sequence:";
    for (int num : nums) {
        cout << " " << num;
    }
    cout << endl;

    return 0;
}
