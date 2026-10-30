
/*
Problem: Check if Array Is Sorted

Approach: Single Traversal
- Start traversing from the second element (index 1).
- Compare the current element with the previous element.
- If the previous element is greater than the current
  element, the array is not sorted.
- If no such pair is found, the array is sorted.

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

bool isSorted(vector<int>& nums) {
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i - 1] > nums[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    vector<int> nums = {1, 2, 2, 3, 4};

    if (isSorted(nums)) {
        cout << "Array is sorted" << endl;
    }
    else {
        cout << "Array is not sorted" << endl;
    }

    return 0;
}
