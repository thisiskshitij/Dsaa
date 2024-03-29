#include <iostream>
using namespace std;

void ceptOne(int arr[], int size1, int brr[], int size2, int ceptIndex)
{
    int index = 0;
    for (int i = 0; i < size1; i++)
    {
        if (i != ceptIndex)
        {
            brr[index] = arr[i];
            index++;
        }
    }
}
int main()
{
    int n = 7;
    int source[n] = {1, 2, 3, 4, 5, 6, 7};
    int m = n - 1;
    int dest[m];
    int ceptIndex = 2;

    ceptOne(source, n, dest, m, ceptIndex);
    for (int i = 0; i < m; i++)
    {
        cout << dest[i] << " ";
    }
}