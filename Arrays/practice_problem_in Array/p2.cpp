// swap the min and max number of array
#include <iostream>
using namespace std;

void swapMinAndMaxNum(int arr[], int n)
{
    int smallest = arr[0], largest = arr[0];
    int p, q;
    for(int i = 1; i < n; i++)
    {
        if(smallest > arr[i])
        {
            smallest = arr[i];
            p = i;
        }
        if(largest < arr[i])
        {
            largest = arr[i];
            q = i;
        }
    }
    swap(arr[p], arr[q]);
}
int main() {
    int size = 5;
    int arr[] = {1, 4, -1, 8, 35};
    swapMinAndMaxNum(arr, size);
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}