# Move Zeroes to End

**Problem:** Move all zeroes to the end of an array while maintaining the relative order of non-zero elements.

**Example:**
- Input: `[0, 1, 0, 3, 12]`
- Output: `[1, 3, 12, 0, 0]`

## Approach 1: Brute Force — Temporary Array

**Idea:**
1. Create a temporary array.
2. Store all non-zero elements in it.
3. Add zeroes until its size equals the original array size.
4. Copy the temporary array back.

**Complexity:**
- Time: O(n)
- Auxiliary Space: O(n)

## Approach 2: Optimal — Two Pointers

**Idea:**
1. Find the index of the first zero using pointer `j`.
2. Traverse the remaining array using pointer `i`.
3. Whenever a non-zero element is found, swap it with `nums[j]`.
4. Increment `j` to track the next position for a non-zero element.

**Complexity:**
- Time: O(n)
- Auxiliary Space: O(1)

## Key Observation

The temporary array in the brute-force approach can be eliminated by rearranging elements directly in the original array.

The optimal approach reduces auxiliary space from O(n) to O(1).

**Pattern:** Two Pointers

**Important:** The relative order of non-zero elements must remain unchanged.