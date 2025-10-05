// Author: Ayush Yadav
// GitHub: https://github.com/AyushYadav256
// Description: Kadane's Algorithm to find maximum subarray sum

#include <iostream>
#include <vector>
using namespace std;

int kadaneMaxSum(const vector<int>& nums) {
    int maxSoFar = nums[0];
    int currentMax = nums[0];

    for (size_t i = 1; i < nums.size(); i++) {
        currentMax = max(nums[i], currentMax + nums[i]);
        maxSoFar = max(maxSoFar, currentMax);
    }

    return maxSoFar;
}

int main() {
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    cout << "Array: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    int maxSum = kadaneMaxSum(arr);
    cout << "Maximum Subarray Sum = " << maxSum << endl;

    return 0;
}
