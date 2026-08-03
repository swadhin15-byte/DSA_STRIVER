#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {};
    }
};

int main() {
    Solution obj;
    vector<int> nums = {9, 7, 19, 85};
    int target = 9;

    vector<int> ans = obj.twoSum(nums, target);

    cout << "Indices: ";
    for (int i : ans) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
