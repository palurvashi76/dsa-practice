
/*
Problem: Remove Duplicates from a Sorted Array

Approach 1: Brute Force (Using Set)
- Insert all array elements into a set.
- A set stores only unique elements.
- Copy the unique elements back into the array.
- Time Complexity: O(n log n)
- Extra Space: O(n)

Approach 2: Optimal (Two Pointers)
- Initialize i = 0 to track the last unique element.
- Start j from index 1 to traverse the array.
- If nums[j] is different from nums[i]:
    1. Increment i.
    2. Place nums[j] at nums[i].
- Return i + 1, which represents the number
  of unique elements.

Time Complexity: O(n)
Extra Space: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    int i = 0;

    for (int j = 1; j < nums.size(); j++) {
        if (nums[j] != nums[i]) {
            i++;
            nums[i] = nums[j];
        }
    }

    return i + 1;
}

int main() {
    vector<int> nums = {1, 1, 2, 2, 3, 3, 4};

    int k = removeDuplicates(nums);

    cout << "Number of unique elements: " << k << endl;
    cout << "Array after removing duplicates: ";

    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}
