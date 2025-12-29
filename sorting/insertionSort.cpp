#include <iostream>
#include <vector>
using namespace std;

void insertion(vector<int> &arr, int n) {
    for (int i = 1; i < n; i++)
    {
        int curr = arr[i];
        int prev = i - 1;
        while (prev >= 0 && arr[prev] > curr)
        {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = curr;
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
    insertion(arr, n);
    cout << "Sorted array: ";
    printArray(arr, n);
    return 0;
}