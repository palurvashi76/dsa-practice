
/*
Problem: Largest Element in an Array

Approach 1: Brute Force
- Sort the array in ascending order.
- The last element will be the largest element.
- Time Complexity: O(n log n)
- Extra Space: Depends on the sorting algorithm.

Approach 2: Optimal
- Initialize largest with the first element.
- Traverse the remaining elements.
- If the current element is greater than largest,
  update largest.
- Return largest after the loop.

Time Complexity: O(n)
Extra Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

int largestElement(vector<int>& nums) {
    int largest = nums[0];

    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] > largest) {
            largest = nums[i];
        }
    }

    return largest;
}

int main() {
    vector<int> nums = {3, 7, 2, 9, 5};

    cout << "Largest element: " << largestElement(nums) << endl;

    return 0;
}
