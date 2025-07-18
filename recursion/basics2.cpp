#include <iostream>
using namespace std;

int fib(int n)  // TC => O(2^n) ; SC => O(n)
{
    if(n == 0 || n == 1) return n;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n = 3;
    cout << fib(n) << endl;
    return 0;
}