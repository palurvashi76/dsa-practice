
# Find the Highest and Lowest Frequency Element

## Problem
Given an array, find the element that occurs most frequently and the element that occurs least frequently.

## Approach — Brute Force
1. Create a visited array initialized with false.
2. Traverse the original array using an outer loop.
3. Skip elements that have already been counted.
4. Initialize a counter to 1 for the current element.
5. Use an inner loop to find its duplicate occurrences.
6. Mark duplicate positions as visited.
7. Compare the frequency with the current maximum and minimum frequencies.
8. Store the corresponding elements.

If multiple elements have the same highest or lowest frequency, this implementation keeps the first one encountered.

## Example
Input: `[1, 2, 2, 3, 1, 1, 4]`

Output:
```text
Highest frequency element: 1 (3 times)
Lowest frequency element: 3 (1 times)
```

## Complexity Analysis
- **Time Complexity:** O(n²) — Nested loops traverse and compare elements.
- **Auxiliary Space:** O(n) — The visited vector stores n boolean values.

## Key Concepts
- Array traversal
- Nested loops
- Frequency counting
- Visited array
- Maximum and minimum tracking

## Pattern
Basic Hashing / Frequency Counting
