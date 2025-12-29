#include <iostream>
#include<vector>
// Dutch national flag algorithm to sort by using three pointers (optimal approach for sort colors)
using namespace std;
// T.C => O(n) it is used because it gives the solution in single pass of array
// optimized approach is there which is used and have T.C=> o(n) but in two passes of array
void sortColors(vector<int> &arr, int n) 
{
    int low = 0, mid = 0, high = n - 1;
    while (mid <= high)
    {
        if(arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++; mid++;
        } else if(arr[mid] == 1) mid++;
        else {
            swap(arr[high], arr[mid]);
            high--;
        }
    }   
}

void printArray(vector<int> &arr, int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    vector<int> arr = {2,0,2,1,1,0,1,2,0,0};
    int n = arr.size();
    sortColors(arr, n);
    cout << "Sorted array: ";
    printArray(arr, n);
    return 0;
}