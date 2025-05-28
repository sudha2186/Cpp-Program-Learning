// calculate sum and product of array 
#include <iostream>
using namespace std;

void sumAndProduct(int arr[], int n)
{
    int sum = 0, prod = 1;
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
        prod *= arr[i];
    }
    cout << "Sum: " << sum << " product: " << prod << endl;
}
int main() {
    int size = 5;
    int arr[] = {1, 2, 3, 4, 5};
    sumAndProduct(arr, size);
    return 0;
}