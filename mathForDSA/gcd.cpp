#include <iostream>
using namespace std;

int gcd(int a, int b) 
{
    if(b == 0) return a;

    return gcd(b, a%b);
}
int main() {
    int a = 0, b = 24;
    cout << gcd(a, b) << endl;
    return 0;
}