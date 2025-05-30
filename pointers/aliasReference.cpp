#include <iostream>
using namespace std;

void changeA(int &b) // pass by reference is done using alias(another name of parameter) or refernces due thid also changes will be done in main func
{
    b = 70; // here in memory new copy of a is not created directly new pamter is created where address of a is stored
}

int main() {
    int a = 30;
    changeA(a);
    cout << "Inside main func: " << a << endl;
    return 0;
}