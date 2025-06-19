#include <iostream>
using namespace std;
// reversing string using char array 
void reverseString(char arr[], int n)
{
    int st = 0, end = n - 1;
    while(st < end) {
        swap(arr[st], arr[end]);
        st++;
        end--;
    }
}

int main() {
    char arr[] = "abc";
    reverseString(arr, 3);
    for(char val : arr) {
        cout << val;
    }
    return 0;
}
