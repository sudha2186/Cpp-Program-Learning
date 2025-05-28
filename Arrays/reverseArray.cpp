#include <iostream>
using namespace std;
// 2 Pointer approach  type problem
// Time complexity => O(n)
void reverse(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int temp;
    while(start < end)
    {
        // swap(arr[start], arr[end]); // M-1 => Inbuilt swap function
        temp = arr[start]; // M-2 => from scratch
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int size = 7;
    int arr[size] = {1, 2, 3, 4, 5, 6, 7};
    reverse(arr, size);
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}