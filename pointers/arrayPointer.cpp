#include <iostream>
using namespace std;

int main() {
    int size = 5;
    int arr[] = {1, 2, 3, 4, 5};
    // array is also pointer but it is constant pointer, which means it's pointer value can not be changed 
    cout << arr << endl;
    cout << *arr << endl;
    for(int i = 0; i < size; i++)
    {
        cout << arr + i << endl;
        cout << *(arr + i) << endl;
    }
    return 0;
}