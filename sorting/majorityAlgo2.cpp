#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// Time complexity O(nlogn) = sort -> O(nlogn) +  loop -> O(n) 
int majorityEle(vector<int> nums)
{
    int n = nums.size();
    sort(nums.begin(), nums.end());
    int freq = 1, ans = nums[0];
    for(int i = 1; i < n; i++) 
    {
        if(nums[i] == nums[i-1]) freq++;
        else
        {
            ans = nums[i];
            freq = 1;
        }
        if(freq > n/2) return ans;
    }
    return -1;
}

int main() {
    vector<int> nums = {1, 2, 2, 1, 1};
    int ele = majorityEle(nums);
    cout << ele << endl;
    return 0;
}