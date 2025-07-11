#include <iostream>
#include <vector>
using namespace std;
// Time complexity => O(n)
int majorityElement(vector<int> nums) 
{
    int n = nums.size();
    int freq = 0, ans = 0;
    for(int i = 0; i < n; i++) 
    {
        if(freq == 0) {
            ans = nums[i];
        }
        if(nums[i] == ans) {
            freq++;
        } 
        else {
            freq--;
        }
    }
    // for the case where majority element do not exist
    int count = 0;
    for (int val : nums) {
        if(val == ans) count++;
    }
    if(count > n/2) return ans;
    else return -1;
    return ans;
}
int main() {
    vector<int> nums = {1, 2, 2, 1, 1};
    int ele = majorityElement(nums);
    cout << ele << endl;
    return 0;
}