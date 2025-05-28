#include <iostream>
using namespace std;
// Time complexity O(n)
int search(int arr[], int target, int size)
{
    for(int i = 0; i < size; i++)
    {
        if(target == arr[i])
        {
            return i;
        }
    }
    return -1;
}
int main() {
    int size = 8;
    int target = 9;
    int arr[] = {1, 4, -2, 5, 57, 9, 0, -5};
    cout << search(arr, target, size) << endl;
    return 0;
}