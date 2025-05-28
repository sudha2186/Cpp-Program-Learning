#include <iostream>
using namespace std;

int main() {
    int size = 8;
    int p, q;
    int arr[] = {1, 4, -2, 5, 57, 9, 0, -5};
    int smallest = arr[0];
    int largest = arr[0];
    for(int i = 1; i < size; i++)
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
    cout << "Largest: " << largest << endl;
    cout << "Smallest: " << smallest << endl; 
    return 0;
}