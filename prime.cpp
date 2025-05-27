#include <iostream>
using namespace std;

int main()
{
    // int count = 0;
    int n;
    cout << "Enter your number: ";
    cin >> n;
/* M-1
     for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            count++;
        }
    }

    if (count == 0 && n > 1) {
        cout << "It is prime number" << endl;
    } else {
        cout << "not" << endl;
    }*/
/* M-2
    bool isPrime = true;
    for (int i = 2; i <= n - 1; i++)
    {
        if(n%i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if(isPrime) cout << "Prime";
    else cout << "Not prime";
} */
//M-3
    bool isPrime = true;
    for (int i = 2; i * i <= n ; i++)
    {
        if(n%i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if(isPrime) cout << "Prime";
    else cout << "Not prime";
}
