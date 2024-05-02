#include <iostream>
#include <vector>

using namespace std;

int binarySearch(const vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}

int main() {
    // Input the sorted list of numbers
    vector<int> nums = {5, 10, 15, 20, 25};
    
    // Input the number to search for
    int target;
    cout << "Enter the number to search for: ";
    cin >> target;

    // Perform binary search
    int position = binarySearch(nums, target);

    // Output the result
    if (position != -1) {
        cout << "Number found at position " << position << endl;
    } else {
        cout << "Number not found" << endl;
    }

    return 0;
}
