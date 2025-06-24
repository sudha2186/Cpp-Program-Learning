#include <iostream>
#include <math.h>
using namespace std;
// TC => O(log n) base 10 

void printDigit(int n) 
{
    int dig;
    while(n != 0) {
        dig = n%10;
        cout << dig << " ";
        n /= 10; // because of this division by 10 B-10
    }
    cout << endl;
}

int main() {
    int n = 4567;
    printDigit(n);
    cout << (int)(log10(n) + 1) << endl; // to count the digit (trick)
    return 0;
}