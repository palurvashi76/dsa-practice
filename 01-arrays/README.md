
# Largest Element in an Array

## Problem
Find the largest element in the given array.

## Example
Input: [3, 7, 2, 9, 5]
Output: 9

## Brute Force Approach
Sort the array in ascending order and return the last element.

Time Complexity: O(n log n)

## Optimal Approach
Initialize `largest` with the first element.
Traverse the remaining array and update `largest`
whenever a greater element is found.

Time Complexity: O(n)
Space Complexity: O(1)

## Key Learning
We initialize `largest` with `nums[0]` instead of 0
so the algorithm also works when all elements are negative.
