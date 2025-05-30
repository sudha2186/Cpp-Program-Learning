#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *ptr = &a;
    int **parPtr = &ptr; // This pointer to pointer is used to get the address of the another pointer

    cout << a << endl; // 10
    cout << &a << endl; // address of a
    cout << ptr << endl; // value => address of a
    cout << &ptr << endl; // address of ptr
    cout << parPtr << endl; // value => address of ptr 
    return 0;
}