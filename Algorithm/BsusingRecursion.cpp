#include <iostream>
#include<vector>
using namespace std;
// space complexity O(1);
int BS(vector<int> arr, int targ, int st, int end)
{
    if(st <= end)
    {
        int mid = st + (end - st)/2;

        if(arr[mid] < targ) {
            return BS(arr, targ, mid+1, end);
        } else if (arr[mid] > targ) {
            return BS(arr, targ, st, mid - 1);
        } else {
            return mid;
        }
    }
    return -1;
}

int main() {
    vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12};
    int tar1 = 12;
    int st = 0, end = arr1.size()-1;
    cout << BS(arr1, tar1, st, end) << endl;
    return 0;
}