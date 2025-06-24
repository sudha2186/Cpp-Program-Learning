#include <iostream>
#include <climits>
using namespace std;
// the signed 32-bit integer range [-231, 231 - 1], Assume the environment does not allow you to store 64-bit integers (signed or unsigned).
int reverse(int x) {
    int rev = 0;

    while (x != 0) {
        int digit = x % 10;
        x /= 10;
        if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && digit > 7)) return 0;
        if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && digit < -8)) return 0;

        rev = rev * 10 + digit;
    }
    return rev;
} 

int main() {
    int n = 123;
    cout << reverse(n) << endl;
    return 0;
}