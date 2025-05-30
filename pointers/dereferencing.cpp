#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *ptr = &a;
    int **parPtr = &ptr;
    int *ptr2 = NULL; // null pointer

    cout << a << endl;
    cout << *(ptr) << endl; // 10
    cout << *parPtr << endl; // address of a
    cout << **parPtr << endl; // 10
    cout << ptr2 << endl; // 0 => Null pointer
    return 0;
}