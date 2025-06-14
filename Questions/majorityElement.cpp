#include <iostream>
#include <vector>
using namespace std;
// Time complexity O(n^2)
int majorityEle(vector<int> nums)
{
    for(int val : nums) {
        int freq = 0;
        for(int ele : nums) {
            if(val == ele) freq++;
        }
        if(freq > nums.size() / 2) return val;
    }
    return -1;
}

int main() {
    vector<int> nums = {1, 2, 2, 1, 1};
    int ele = majorityEle(nums);
    cout << ele << endl;
    return 0;
}