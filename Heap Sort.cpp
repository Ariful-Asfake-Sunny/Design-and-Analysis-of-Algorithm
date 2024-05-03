#include <iostream>
#include <vector>

using namespace std;

void heapify(vector<int>& arr, int heap_size, int index) {
    int largest = index;
    int left = 2 * index + 1;
    int right = 2 * index + 2;

    if (left < heap_size && arr[left] > arr[largest]) {
        largest = left;
    }

    if (right < heap_size && arr[right] > arr[largest]) {
        largest = right;
    }

    if (largest != index) {
        swap(arr[index], arr[largest]);
        heapify(arr, heap_size, largest);
    }
}

void buildMaxHeap(vector<int>& arr) {
    int n = arr.size();
    for (int i = n / 2 - 1; i >= 0; --i) {
        heapify(arr, n, i);
    }
}

void heapSort(vector<int>& arr) {
    int n = arr.size();
    buildMaxHeap(arr);
    for (int i = n - 1; i > 0; --i) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

int main() {
    // Input a sequence of numbers
    vector<int> nums = {5, 3, 8, 1, 9, 2};
    
    // Sort the sequence using heap sort
    heapSort(nums);

    // Output the sorted sequence
    cout << "Sorted sequence:";
    for (int num : nums) {
        cout << " " << num;
    }
    cout << endl;

    return 0;
}
