
#include <iostream>
#include <vector>
using namespace std;

void findHighestLowestFrequency(vector<int>& nums) {
    int n = nums.size();
    vector<bool> visited(n, false);

    int maxFreq = 0;
    int minFreq = n;
    int maxElement = -1;
    int minElement = -1;

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

        if (count > maxFreq) {
            maxFreq = count;
            maxElement = nums[i];
        }

        if (count < minFreq) {
            minFreq = count;
            minElement = nums[i];
        }
    }

    cout << "Highest frequency element: "
         << maxElement << " (" << maxFreq << " times)" << endl;

    cout << "Lowest frequency element: "
         << minElement << " (" << minFreq << " times)" << endl;
}

int main() {
    vector<int> nums = {1, 2, 2, 3, 1, 1, 4};

    findHighestLowestFrequency(nums);

    return 0;
}
