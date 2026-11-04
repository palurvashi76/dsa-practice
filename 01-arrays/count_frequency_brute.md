
# Count Frequency of Each Element — Brute Force

## Problem
Given an array, count how many times each distinct element occurs.

## Approach — Brute Force
1. Create a boolean `visited` vector initialized with false.
2. Traverse the array using an outer loop.
3. If an element is already visited, skip it.
4. Initialize `count = 1` for the current element.
5. Use an inner loop to check the remaining elements.
6. If a duplicate is found, increment the count and mark that position as visited.
7. Print the element and its frequency.

## Example
Input: `[1, 2, 2, 3, 1, 1]`

Output:
```text
1 appears 3 times
2 appears 2 times
3 appears 1 times
```

## Complexity Analysis
- **Time Complexity:** O(n²) — Nested loops compare elements.
- **Auxiliary Space:** O(n) — The visited vector stores one boolean for each array position.

## Key Concepts
- Nested loops
- Boolean vector
- Visited array
- Frequency counting

## Pattern
Basic Hashing / Array Traversal

## Note
This is the brute-force approach. Hashing using `unordered_map` can solve the frequency-counting problem more efficiently.
