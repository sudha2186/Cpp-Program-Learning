#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// T.C => O(nlogN) 
// Similar to painter partition but here we need to find largest minimum distance opposite of painter partition problem
bool isPossible(vector<int> &arr, int n, int m, int mid) {
    int cows = 1, lastStallPos = arr[0];
    for(int i = 0; i < n; i++) {
        if(arr[i] - lastStallPos >= mid) {
            cows++;
            lastStallPos = arr[i];
        }
        if(cows == m) return true;
    }
    return false;
}

int posOfCows(vector<int> &arr, int n, int m)
{
    sort(arr.begin(), arr.end());
    int st = 1, end = arr[n-1] - arr[0], ans = -1;
    while (st <= end) 
    {
        int mid = st + (end - st)/2;
        if(isPossible(arr, n, m, mid)) {
            st = mid + 1;
            ans = mid;
        } else {
            end = mid - 1;
        }
    }
    return ans;
}

int main() {
     vector<int> arr = {1,2,8,4,9};
    int n = arr.size(), m = 3;
    cout << posOfCows(arr, n, m);
    return 0;
}