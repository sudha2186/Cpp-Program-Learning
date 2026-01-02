#include <iostream>
using namespace std;

bool isPalindrome(int x) {
    if (x < 0 || (x % 10 == 0 && x != 0)) {
        return false;
    }
    int reversedHalf = 0;
    // Reverse only half of the number
    while (x > reversedHalf) {
        reversedHalf = reversedHalf * 10 + x % 10;
        x /= 10;
    }
    // For even length, x == reversedHalf
    // For odd length, ignore the middle digit: x == reversedHalf / 10
    return (x == reversedHalf || x == reversedHalf / 10);
} 

int main() {
    int x = 121;
    cout << isPalindrome(x);
    return 0;
}

// int reverse(int x) {
//         int rev = 0;

//         while (x != 0) {
//             int digit = x % 10;
//             x /= 10;
//             if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && digit > 7)) return 0;
//             if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && digit < -8)) return 0;

//             rev = rev * 10 + digit;
//         }
//         return rev;
//     } 
//     bool isPalindrome(int x) {
//         if(x < 0) return false;
//         int revNum = reverse(x);
//         return revNum == x;
//     }