#include <iostream>
using namespace std;

void uniqueVal(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool isUnique = true;

        for (int j = 0; j < n; j++)
        {
            if (i != j && arr[i] == arr[j])
            {
                isUnique = false;
                break;
            }
        }

        if (isUnique)
        {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main()
{
    int size = 6;
    int arr[] = {1, 2, 4, 2, 3, 1};
    uniqueVal(arr, size);
    return 0;
}
