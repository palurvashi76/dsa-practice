
/*
Problem: Second Largest Element in an Array

Approach 1: Brute Force
- Sort the array in ascending order.
- Start from the second-last element.
- Find the first element different from the largest.
- That element is the second-largest distinct element.
- Time Complexity: O(n log n)

Approach 2: Better (Two Traversals)
- First traversal: Find the largest element.
- Second traversal: Find the largest element smaller
  than the largest.
- Time Complexity: O(n)
- Extra Space: O(1)

Approach 3: Optimal (One Traversal)
- Maintain two variables: largest and slargest.
- If the current element is greater than largest,
  move the old largest into slargest first.
- Otherwise, if the current element is smaller than
  largest but greater than slargest, update slargest.
- Ignore duplicates of largest.
- Time Complexity: O(n)
- Extra Space: O(1)
*/

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int secondLargestElement(vector<int>& nums) {
    int largest = nums[0];
    int slargest = INT_MIN;

    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] > largest) {
            slargest = largest;
            largest = nums[i];
        }
        else if (nums[i] < largest && nums[i] > slargest) {
            slargest = nums[i];
        }
    }

    if (slargest == INT_MIN) {
        return -1; // No second-largest distinct element
    }

    return slargest;
}

int main() {
    vector<int> nums = {3, 7, 2, 9, 5};

    cout << "Second largest element: "
         << secondLargestElement(nums) << endl;

    return 0;
}
