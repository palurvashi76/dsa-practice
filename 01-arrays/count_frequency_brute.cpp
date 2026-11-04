
#include <iostream>
#include <vector>
using namespace std;

void countFrequency(vector<int>& nums) {
    int n = nums.size();
    vector<bool> visited(n, false);

    for (int i = 0; i < n; i++) {
        if (visited[i] == true) {
            continue;
        }

        int count = 1;

        for (int j = i + 1; j < n; j++) {
            if (nums[i] == nums[j]) {
                count++;
                visited[j] = true;
            }
        }

        cout << nums[i] << " appears "
             << count << " times" << endl;
    }
}

int main() {
    vector<int> nums = {1, 2, 2, 3, 1, 1};

    countFrequency(nums);

    return 0;
}
