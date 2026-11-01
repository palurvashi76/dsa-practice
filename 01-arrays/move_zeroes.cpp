
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Brute Force: Using a temporary array
void moveZeroesBrute(vector<int>& nums) {
    vector<int> temp;

    // Store non-zero elements
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            temp.push_back(nums[i]);
        }
    }

    // Add zeroes at the end
    while (temp.size() < nums.size()) {
        temp.push_back(0);
    }

    // Copy elements back
    for (int i = 0; i < nums.size(); i++) {
        nums[i] = temp[i];
    }
}

// Optimal: Two Pointers
void moveZeroes(vector<int>& nums) {
    int j = -1;

    // Find the first zero
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == 0) {
            j = i;
            break;
        }
    }

    if (j == -1) return;

    // Move non-zero elements forward
    for (int i = j + 1; i < nums.size(); i++) {
        if (nums[i] != 0) {
            swap(nums[i], nums[j]);
            j++;
        }
    }
}

int main() {
    vector<int> nums = {0, 1, 0, 3, 12};

    moveZeroes(nums);

    for (int num : nums) {
        cout << num << " ";
    }

    return 0;
}
