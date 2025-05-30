#include <iostream>
using namespace std;

int main() {
    // we can not add 2 pointer but we can subtract and compare them
    int a = 10;
    int *ptr = &a;
    int *ptr1;
    int *ptr2 = ptr1 + 2;

    cout<< ptr2 - ptr1 << endl;
    cout << (ptr2 < ptr1) << endl; // 0 => false

    cout << ptr << endl;
    ptr++;
    cout << ptr << endl; // address of a + (sizeof(datatype of pointer))
    ptr += 2; // 2 int => 8 bits
    cout << ptr << endl; 
    return 0;
}