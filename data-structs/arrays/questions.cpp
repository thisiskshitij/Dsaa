#include <iostream>
using namespace std;

void deletionFromArray(int arr[], int& n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            for (int k = i; k < n - 1; k++)
            {
                arr[k] = arr[k + 1];
            }
            i--;
            n--;
        }
    }
}
int main()
{
    int n = 6;
    int key = 2;
    int arr[n] = {1, 2, 2, 3, 4, 5};
    deletionFromArray(arr, n, key);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}