#include <iostream>
#include <vector>

using namespace std;

int linearSearch(const vector<int>& nums, int target) {
    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    // Input the list of numbers
    vector<int> nums = {5, 10, 15, 20, 25};
    
    // Input the number to search for
    int target;
    cout << "Enter the number to search for: ";
    cin >> target;

    // Perform linear search
    int position = linearSearch(nums, target);

    // Output the result
    if (position != -1) {
        cout << "Number found at position " << position << endl;
    } else {
        cout << "Number not found" << endl;
    }

    return 0;
}
