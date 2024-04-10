#include <iostream>
using namespace std;

void uniqMerge(int arr[], int size1)
{
    int uniqArr[size1];
    int uniqCount=0;

    for (int i = 0; i < size1; i++)
    {
        bool duplicate = false;
        for (int j = 0; j < uniqCount; j++)
        {
            if (arr[i] ==uniqArr[j])
            {
                duplicate = true;
                break;
            }
        }
        if (!duplicate)
        {
            uniqArr[uniqCount] = arr[i];
            uniqCount++;
        }
    }
    for (int i = 0; i < uniqCount; i++)
    {
        cout << uniqArr[i] << " ";
    }
};

int main()
{
    int n = 7;
    int m = 6;
    int arr[n] = {10, 10, 5, 6, 7, 6};
    int brr[m] = {};

    uniqMerge(arr, m);

    return 0;
}
