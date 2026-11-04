
# Linear Search

## Problem
Given an array and a target element, find the index of the target. If the target is not present, return -1.

## Approach
1. Traverse the array from the first element to the last.
2. Compare each element with the target.
3. If a match is found, return its index.
4. If the loop completes without finding the target, return -1.

## Example
Input: `nums = [10, 20, 30, 40, 50]`, `target = 30`

Output: `2`

## Complexity Analysis
- **Time Complexity:** O(n) — In the worst case, every element is checked.
- **Auxiliary Space:** O(1) — No extra data structure is used.

## Key Concepts
- Array traversal
- Indexing
- Conditional statements
- Early return

## Pattern
Array Traversal / Searching
