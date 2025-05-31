#include <iostream>
#include<vector>
using namespace std;
//Time complexity O(n^2)
//Using Brute force
vector<int> pairSum(vector<int> nums, int tar) {
    vector<int> ans;
    for(int i = 0; i < nums.size(); i++) {
        for(int j = i + 1; j < nums.size(); j++) {
            if(nums[i] + nums[j] == tar) {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 18;
    vector <int> ans = pairSum(nums, target);
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}