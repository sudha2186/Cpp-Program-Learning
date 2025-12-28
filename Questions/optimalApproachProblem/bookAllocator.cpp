#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
// same problem as painter partition 
//TC => O(n logn); sc => O(1)
bool isValid(vector<int> arr, int n, int m, int mid) {
    int stu = 1, pages = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] > mid) return false;

        if(pages + arr[i] <= mid) {
            pages += arr[i];
        } else {
            stu++;
            pages = arr[i];
            if(stu > m) return false;  // ✅ critical fix
        }
    }
    return true;
}


int allocate(vector<int> arr, int n, int m)
{
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
        // midVal = mid(midVal, arr[i]);
    }
    int st = 0, end = sum;
    int ans = -1;
    while (st <= end)
    {
        int mid = st + (end - st)/2;
        if(isValid(arr, n, m, mid)) {
            ans = mid;
            end = mid - 1;
        } else {
            st = mid + 1;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {15, 17, 20};
    int n = 3, m = 2;
    cout << allocate(arr, n, m);
    return 0;
}