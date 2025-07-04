#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// TC => O(n^2) + O(nlogn)
vector<vector<int>> threeSum(vector<int>& nums) {
    int n = nums.size();
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    for(int i = 0; i < n; i++) {
        if(i > 0 && nums[i - 1] == nums[i]) continue;
        int j = i + 1, k = n - 1;
        while(j < k) {
            int sum = nums[i] + nums[j] + nums[k];
            if(sum < 0) {
                j++;
            } else if(sum > 0) {
                k--;
            } else {
                ans.push_back({nums[i], nums[j], nums[k]});
                j++; k--;
                while(j < k && nums[j] == nums[j - 1]) j++;
            }
        }
    }
    return ans;
}

int main() {
    vector<int> nums = {-1,0,1,2,-1,-4};
    vector<vector<int>> ans = threeSum(nums);
    for(vector<int> val : ans) {
        for(int el : val) {
            cout << el << " ";
        }
        cout << endl;
    }
    return 0;
}