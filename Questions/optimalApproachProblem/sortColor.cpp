#include <iostream>
#include<vector>
// S.c => O(1)
using namespace std;
// this is optimized approach which uses and have T.C=> o(n) but in two passes of array 
// T.C => O(n) dnf algo is used because it gives the solution in single pass of array
void sortColors(vector<int> &arr, int n) 
{
    int count0 = 0, count1 = 0, count2 = 0;
    for(int i = 0; i < n; i++) { // first pass
        if(arr[i] == 0) count0++;
        else if(arr[i] == 1) count1++;
        else count2++;
    }

    // second pass

    int idx = 0;
    for(int i = 0; i < count0; i++) {
        arr[idx] = 0;
        idx++;
    }
    for(int i = 0; i < count1; i++) {
        arr[idx] = 1;
        idx++;
    }
    for(int i = 0; i < count2; i++) {
        arr[idx] = 2;
        idx++;
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