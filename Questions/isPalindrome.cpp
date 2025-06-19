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