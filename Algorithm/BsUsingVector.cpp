#include <iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> arr, int targ)
{
    int st = 0, end = arr.size()-1; 
    while(st <= end)
    {
        int mid = (st + end) /2;
        // To optimized it we use this formula of mid i.e. mid = st + (end - st)/2 to avoid overflow for int 
        // Because in some platform the value for st, end can be INT_MAX so to add it , which is not possible so we use optimized formula
        if(arr[mid] < targ) {
            st = mid + 1;
        } else if (arr[mid] > targ) {
            end = mid - 1;
        } else {
            return mid;
        }
    }
    return -1;
}

int main() {
    vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12};
    int tar1 = 12;
    cout << binarySearch(arr1, tar1) << endl;
    vector<int> arr2 = {-1, 0, 3, 4, 5, 9};
    int tar2 = 0;
    cout << binarySearch(arr2, tar2) << endl;
    return 0;
}
