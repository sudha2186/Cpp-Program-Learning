#include <iostream>
#include <string> // this is not required 
using namespace std;

int main() {
    string str1 = "apna"; // dynamic in nature can be resized in runtime 
    string str2 = "college";
    cout << str1 + str2 << endl; // concatenation
    cout << (str1 == str2) << endl; // comparison
    
    return 0;
}