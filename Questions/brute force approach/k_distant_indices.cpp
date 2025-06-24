#include <iostream>
#include <vector>
using namespace std;

vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
    vector<int> res;
    int n = nums.size();
    // traverse number pairs
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (nums[j] == key && abs(i - j) <= k) {
                res.push_back(i);
                break;  // early termination to prevent duplicate addition
            }
        }
    }
    return res;
} 

int main() {
    vector<int> nums = {3,4,9,1,3,9,5};
    int key = 9, k = 1;
    vector <int> ans = findKDistantIndices(nums, key, k);
    for(int val : ans) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}