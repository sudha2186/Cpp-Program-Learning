#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if(b == 0) return a;
    return gcd(b, a%b);
}

int lcm(int a, int b) 
{
    int res = (a*b)/gcd(a, b);
    return res;
}

int main() {
    cout << lcm(20, 28) << endl;
    return 0;
}