#include <iostream>
using namespace std;

void changeA(int *ptr) // here pass by refernce is done using pointer where the changes direcctly occur in main function
{
    *ptr = 30;
}
int main() {
    int a = 10;
    changeA(&a);
    
    cout << "Inside main func: " << a << endl;
    return 0;
}