
#include <iostream>
#include <vector>
using namespace std;

void leftRotate(vector<int>& nums) {
    int first = nums[0];

    for (int i = 1; i < nums.size(); i++) {
        nums[i - 1] = nums[i];
    }

    nums[nums.size() - 1] = first;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};

    leftRotate(nums);

    for (int num : nums) {
        cout << num << " ";
    }

    return 0;
}
