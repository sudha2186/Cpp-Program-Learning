#include <iostream>
using namespace std;

int main() {
    char str[13];
    cout << "Enter string: ";
    cin.getline(str, 13);
    // for (char val : str) {
    //     cout << val << " ";
    // }
    for(int i = 0; i < str[i] != '\0'; i++) {
        cout << str[i] << " ";
    }
    cout << endl;
    return 0;
}