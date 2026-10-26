
# Second Largest Element in an Array

## Problem
Find the second-largest distinct element in an array.

## Example
Input: [3, 7, 2, 9, 5]
Output: 7

## Brute Force Approach
Sort the array in ascending order and scan backward
to find the first element different from the largest.

Time Complexity: O(n log n)

## Better Approach
Use two traversals:
1. Find the largest element.
2. Find the largest element smaller than the largest.

Time Complexity: O(n)
Space Complexity: O(1)

## Optimal Approach
Use one traversal with two variables:
- largest: the largest element found so far.
- slargest: the second-largest distinct element found so far.

When a new largest element is found, save the old
largest in slargest before updating largest.

Ignore duplicate occurrences of the largest element.

Time Complexity: O(n)
Space Complexity: O(1)

## Key Learning
Update slargest before updating largest, so the old
largest value is not lost.

The second-largest element must be distinct from
the largest element.
