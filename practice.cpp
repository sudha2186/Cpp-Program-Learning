#include <iostream>
using namespace std;

int sum(int n)
{
    int sum = 0;
    for(int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}
long factorial(int n)
{
    long fact = 1;
    for(int i = 1; i<= n; i++)
    {
        fact *= i;
    }
    return fact;
}
int sumOfDigits(int n)
{
    int d;
    int sum = 0;
    while(n > 0)
    {
        d = n % 10;
        sum += d;
        n = n / 10;
    }
    return sum;
}

int decToBinary(int n)
{
    int rem; // remainder
    int pow = 1; // power 
    int bin = 0; // binary
    while(n > 0)
    {
        rem = n % 2;
        n = n/2;
        bin += (rem*pow);
        pow *= 10;
    }
    return bin;
}

int binaryToDec(int n)
{
    int rem;
    int dec = 0;
    int pow = 1;
    while(n > 0)
    {
        rem = n%10;
        dec += (rem * pow);
        pow *= 2;
        n = n/10;
    }
    return dec;
}

int main() {
    cout << sum(5) << endl;
    cout << factorial(5) << endl;
    cout << sumOfDigits(145) << endl;
    cout << decToBinary(10) << endl;
    cout << binaryToDec(1000) << endl;
    return 0;
}