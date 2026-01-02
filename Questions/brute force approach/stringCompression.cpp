#include <iostream>
#include <vector>
using namespace std;

int stringCompression(vector<char> chars, int n )
{
    int idx = 0;
    for (int i = 0; i < n; i++)
    {
        int count = 0, ch = chars[i];
        while (i < n && ch == chars[i])
        {
            count++; i++;
        }
        if(count == 1) chars[idx++] = ch;
        else {
            chars[idx++] = ch;
            string str = to_string(count);
            for(char digit : str) {
                chars[idx++] = digit;
            }
        }
        i--;
    }
    chars.resize(idx);
    return chars.size();
    
}

int main() {
    vector<char> chars = {'a', 'a', 'b', 'b', 'a', 'd', 'c'};
    int n = chars.size();
    cout << stringCompression(chars, n) << endl;
    return 0;
}