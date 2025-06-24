#include <iostream>
using namespace std;
// TC => O(log n) base 10 
bool armstrongNum(int n) 
{
    int dig, num = 0, tmp = n;
    while(n != 0) {
        dig = n%10;
        num += (dig * dig * dig);
        n /= 10; 
    }
    if(num == tmp) return true;
}

int main() {
    int n = 153;
    cout << armstrongNum(n) << endl;
    return 0;
}
