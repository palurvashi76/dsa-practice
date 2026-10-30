
# Remove Duplicates from a Sorted Array

## Problem
Remove duplicate elements from a sorted array
without using extra space.

Return the number of unique elements (k).
The first k positions must contain the unique elements.

## Example
Input: [1, 1, 2, 2, 3, 3, 4]
Output: 4

Modified array (first 4 elements): [1, 2, 3, 4]

## Brute Force Approach (Using Set)
1. Insert all elements into a set.
2. The set automatically removes duplicates.
3. Copy the unique elements back into the array.

Time Complexity: O(n log n)
Space Complexity: O(n)

## Optimal Approach (Two Pointers)
1. Initialize i = 0.
2. Start j from index 1.
3. Compare nums[j] with nums[i].
4. If they are different:
   - Increment i.
   - Update nums[i] = nums[j].
5. Return i + 1.

Time Complexity: O(n)
Space Complexity: O(1)

## Key Learning
Since the array is sorted, duplicate elements
are adjacent to each other.

The two-pointer technique helps remove duplicates
without using an extra data structure.

i tracks the position of the last unique element.
j traverses the array to find the next unique element.
