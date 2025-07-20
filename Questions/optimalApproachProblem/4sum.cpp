#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
// Time complexity O(nlogn + n^3)
vector<vector<int>> fourSum(vector<int>& nums, int tar) {
    int i, j;
    int n = nums.size();
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    for(i = 0; i < n; i++) {
        if(i > 0 && nums[i] == nums[i - 1]) continue;
        for(j = i + 1; j < n; ) {
            int p = j + 1, q = n - 1;
            while(p < q) {
                long long sum = (long long)nums[i] + (long long)nums[j] + (long long)nums[p] + (long long)nums[q];
                if(sum < tar) {
                    p++;
                } else if(sum > tar) {
                    q--;
                } else {
                    ans.push_back({nums[i], nums[j], nums[p], nums[q]});
                    p++; q--;
                    while(p < q && nums[p] == nums[p - 1]) p++;
                }
            }
            j++;
            while(j < n && nums[j] == nums[j - 1]) j++;
        }
    }
    return ans;
}

int main() {
    vector<int> nums = {1,0,-1,0,-2,2};
    int target = 0;
    vector<vector<int>> ans = fourSum(nums, target);
    for(vector<int> val : ans) {
        for(int el : val) {
            cout << el << " ";
        }
        cout << endl;
    }
    return 0;
}
