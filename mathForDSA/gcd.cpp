#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if(b == 0) return a;
    return gcd(b, a%b);
}

string gcdOfStrings(string str1, string str2) 
{
    int gcdlen = gcd(str1.length(), str2.length());
    
    if(str1 + str2 != str2 + str1) return "";
    return str1.substr(0, gcd(str1.length(), str2.length()));
}

int main() {
    string str1 = "ABCABC", str2 = "ABC";
    cout << gcdOfStrings(str1, str2) << endl;
    return 0;
}