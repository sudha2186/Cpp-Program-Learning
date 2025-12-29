#include <iostream>
#include <vector>
using namespace std;

void selection(vector<int> &arr, int n) 
{
    for (int i = 0; i < n-1; i++)
    {
        int smallestIdx = i;
        for (int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[smallestIdx]) {
                smallestIdx = j;
            }
        }
        swap(arr[i], arr[smallestIdx]);
    }
}

void printArray(vector<int> &arr, int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    vector<int> arr = {4,1,5,2,3};
    int n = arr.size();
    selection(arr, n);
    cout << "Sorted array: ";
    printArray(arr, n);
    return 0;
}