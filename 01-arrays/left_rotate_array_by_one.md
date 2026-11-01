# Left Rotate Array by One

**Problem:** Rotate an array to the left by one position. The first element moves to the last position.

**Example:**
- Input: `[1, 2, 3, 4, 5]`
- Output: `[2, 3, 4, 5, 1]`

## Approach 1: Brute Force — Temporary Variable

**Idea:**
1. Store the first element in a temporary variable.
2. Shift every remaining element one position to the left.
3. Place the stored first element at the last index.

**Complexity:**
- Time: O(n)
- Auxiliary Space: O(1)

**Note:** This is already an optimal approach for a left rotation by one position because every element must be shifted.

**Pattern:** Array Traversal / In-place Manipulation