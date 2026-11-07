
#include <iostream>
#include <vector>
using namespace std;

int findSingleElement(vector<int>& nums) {

    for (int i = 0; i < nums.size(); i++) {

        int count = 0;

        for (int j = 0; j < nums.size(); j++) {

            if (nums[i] == nums[j]) {
                count++;
            }
        }

        if (count == 1) {
            return nums[i];
        }
    }

    return -1;
}

int main() {
    vector<int> nums = {4, 1, 2, 1, 2};

    cout << "Element appearing once: "
         << findSingleElement(nums);

    return 0;
}
