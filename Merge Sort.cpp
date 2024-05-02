#include <iostream>
#include <vector>

using namespace std;

vector<int> merge(const vector<int>& left, const vector<int>& right) {
    vector<int> result;
    int left_index = 0;
    int right_index = 0;

    while (left_index < left.size() && right_index < right.size()) {
        if (left[left_index] <= right[right_index]) {
            result.push_back(left[left_index]);
            ++left_index;
        } else {
            result.push_back(right[right_index]);
            ++right_index;
        }
    }

    while (left_index < left.size()) {
        result.push_back(left[left_index]);
        ++left_index;
    }

    while (right_index < right.size()) {
        result.push_back(right[right_index]);
        ++right_index;
    }

    return result;
}

vector<int> mergeSort(const vector<int>& arr) {
    int n = arr.size();
    if (n <= 1) {
        return arr;
    }

    int mid = n / 2;
    vector<int> left(arr.begin(), arr.begin() + mid);
    vector<int> right(arr.begin() + mid, arr.end());

    left = mergeSort(left);
    right = mergeSort(right);

    return merge(left, right);
}

int main() {
    // Input a sequence of numbers
    vector<int> nums = {5, 3, 8, 1, 9, 2};
    
    // Sort the sequence using merge sort
    vector<int> sorted_nums = mergeSort(nums);

    // Output the sorted sequence
    cout << "Sorted sequence:";
    for (int num : sorted_nums) {
        cout << " " << num;
    }
    cout << endl;

    return 0;
}
