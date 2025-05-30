#include <iostream>
using namespace std;
// time complexity O(log n)
int binarySearch(int arr[], int start, int end, int target)
{
    while(start <= end)
    {
        int mid = start + end / 2;
        if(arr[mid] < target)
        {
            end = mid - 1;
        } else if (arr[mid] > target)
        {
            start = mid + 1;
        } else if(arr[mid] == target)
        {
            return mid;
        }
    }
    return -1;
}

int main() {
    int size = 7;
    int arr[] = {-1, 0, 3, 4, 5, 9, 12};
    int start = 0, end = arr[size - 1];
    int target = 12;
    cout << binarySearch(arr, start, end, target) << endl;
    return 0;
}