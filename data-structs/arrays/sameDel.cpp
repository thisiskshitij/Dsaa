#include <iostream>
using namespace std;

void delSameEl(int arr[], int &size1, int brr[], int size2)
{

    for (int i = 0; i < size2; i++)
    {
        for (int j = 0; j < size1; j++)
        {
            if (arr[j] == brr[i])
            {
                for (int k = j; k < size1- 1; k++)
                {
                    arr[k] = arr[k + 1];
                }
                size1--;
                j--;
            }
        }
    }
}
int main()
{
    int n = 7;
    int arr[n] = {1, 2, 3, 4, 5, 6, 7};
    int brr[n] = {5, 6, 7, 8, 9, 10, 1};
    delSameEl(arr, n, brr, 7);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}