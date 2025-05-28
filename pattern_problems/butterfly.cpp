#include <iostream>
using namespace std;

int main() {
    int n = 4;
    // top
    for(int i = 0; i < n; i++)
    {
        // star
        for(int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        // space
        for(int j = 0; j < 2 * (n - i) - 2; j++)
        {
            cout << "  ";
        }
        // star
        for(int j = 0; j <= i; j++)
        {
            cout << "* ";
        }  
        cout << endl;
    }
    // bottom 
    for(int i = 0; i < n; i++)
    {
        // stars
        for(int j = n; j > i; j--)
        {
            cout << "* ";
        }
        // space
        for(int j = 0; j < 2 * i; j++)
        {
            cout << "  ";
        }
        // stars
        for(int j = n; j > i; j--)
        {
            cout << "* ";
        }  
        cout << endl;
    }
    return 0;
}

/*

*             * 
* *         * *
* * *     * * *
* * * * * * * *
* * * * * * * *
* * *     * * *
* *         * *
*             *

*/