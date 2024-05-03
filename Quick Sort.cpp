#include <iostream>
#include <vector>

using namespace std;

int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int smaller_end = low - 1;

    for (int current = low; current < high; ++current) {
        if (arr[current] < pivot) {
            ++smaller_end;
            swap(arr[smaller_end], arr[current]);
        }
    }

    swap(arr[smaller_end + 1], arr[high]);
    return smaller_end + 1;
}

void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void quickSort(vector<int>& arr) {
    int n = arr.size();
    quickSort(arr, 0, n - 1);
}

int main() {
    // Input a sequence of numbers
    vector<int> nums = {5, 3, 8, 1, 9, 2};
    
    // Sort the sequence using quick sort
    quickSort(nums);

    // Output the sorted sequence
    cout << "Sorted sequence:";
    for (int num : nums) {
        cout << " " << num;
    }
    cout << endl;

    return 0;
}
