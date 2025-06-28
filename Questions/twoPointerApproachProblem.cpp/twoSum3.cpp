#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// BETTER APPROACH => Tc => O(nlogn) ->> sort(O(nlogn)) + 2O(n)
vector<int> twoSum(vector<int>& nums, int target) {
    vector<pair<int, int>> valWithIdx;
    
    // Step 1: Store (value, original_index)
    for (int i = 0; i < nums.size(); ++i) {
        valWithIdx.push_back({nums[i], i});
    }

    // Step 2: Sort by value (not by index)
    sort(valWithIdx.begin(), valWithIdx.end());

    int st = 0, end = nums.size() - 1;

    // Step 3: Two-pointer approach
    while (st < end) {
        int sum = valWithIdx[st].first + valWithIdx[end].first;
        if (sum == target) {
            // Return original indices
            return {valWithIdx[st].second, valWithIdx[end].second};
        } else if (sum < target) {
            st++;
        } else {
            end--;
        }
    }

    return {}; // In case no solution
}

int main() {
    vector<int> nums = {2,7,11,15};
    int target = 9;
    vector<int> ans = twoSum(nums, target);
    for(int val : ans) {
        cout << val << " ";
    }
    return 0;
}