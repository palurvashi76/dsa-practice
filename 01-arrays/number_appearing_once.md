
# Find the Number That Appears Once

## Problem
Given an array where every element appears twice except for one element, find the element that appears only once.

## Approach — Brute Force
1. Traverse the array using an outer loop.
2. Initialize a counter to 0 for the current element.
3. Use an inner loop to compare the current element with every element in the array.
4. Whenever a match is found, increment the counter.
5. If the counter is equal to 1, return the current element.
6. If no such element is found, return -1.

## Example
Input: `[4, 1, 2, 1, 2]`

Output:
```text
Element appearing once: 4
```

## Complexity Analysis
- **Time Complexity:** O(n²) — Every element may be compared with all other elements.
- **Auxiliary Space:** O(1) — Only a counter variable is used.

## Key Concepts
- Array traversal
- Nested loops
- Frequency counting
- Conditional statements
- Returning an element

## Pattern
Basic Hashing / Frequency Counting

## Note
An optimized solution can use XOR because equal numbers cancel each other out when XORed. This will be covered separately.
