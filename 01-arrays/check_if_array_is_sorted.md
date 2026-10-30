
# Check if Array Is Sorted

## Problem
Check whether the given array is sorted in non-decreasing order.

## Example 1
Input: [1, 2, 3, 4, 5]
Output: true

## Example 2
Input: [1, 2, 2, 3, 4]
Output: true

## Example 3
Input: [1, 3, 2, 4]
Output: false

## Approach: Single Traversal
1. Start from index 1.
2. Compare the current element with the previous element.
3. If nums[i - 1] > nums[i], return false.
4. If the loop completes, return true.

## Complexity
Time Complexity: O(n)
Space Complexity: O(1)

## Key Learning
For an ascending sorted array, every element must
be greater than or equal to its previous element.

Equal elements are allowed.
