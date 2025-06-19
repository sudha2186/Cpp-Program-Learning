#include <iostream>
#include <string> // this is not required 
using namespace std;

int main() {
    string str1 = "apna"; // dynamic in nature can be resized in runtime 
    string str2 = "college";
    cout << str1 + str2 << endl; // concatenation
    cout << (str1 == str2) << endl; // comparison
    cout << str1.length() << endl; // length

    string str;
    // cin >> str; // ex: hello world => output: hello 
    getline(cin, str);
    cout << "output: " << str << endl;  

    return 0;
}