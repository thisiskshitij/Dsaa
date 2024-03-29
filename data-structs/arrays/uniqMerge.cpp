#include <iostream>
using namespace std;

void uniqMerge(int arr[], int brr[], int n, int m)
{
    int uniqArrayA[n];
    int uniqCount1 = 0;

    // for A
    for (int i = 0; i < n; ++i)
    {
        bool duplicate = false;
        for (int j = 0; j < uniqCount1; ++j)
        {
            if (arr[i] == uniqArrayA[j])
            {
                duplicate = true;
                break;
            }
        }
        if (!duplicate)
        {
            uniqArrayA[uniqCount1] = arr[i];
            uniqCount1++;
        }
    }

    int uniqArrayB[m]; // Change here
    int uniqCount2 = 0;

    // for B
    for (int i = 0; i < m; ++i) // Change here
    {
        bool duplicate = false;
        for (int j = 0; j < uniqCount2; ++j)
        {
            if (brr[i] == uniqArrayB[j])
            {
                duplicate = true;
                break;
            }
        }
        if (!duplicate)
        {
            uniqArrayB[uniqCount2] = brr[i];
            uniqCount2++;
        }
    }

    // Merging both arrays
    int crr[uniqCount1 + uniqCount2]; // Change here

    for (int i = 0; i < uniqCount1; i++) // Change here
    {
        crr[i] = uniqArrayA[i];
    }
    for (int i = 0; i < uniqCount2; i++) // Change here
    {
        crr[uniqCount1 + i] = uniqArrayB[i];
    }

    for (int i = 0; i < uniqCount1 + uniqCount2; i++) // Change here
    {
        cout << crr[i] << " ";
    }
}

int main()
{
    int arr[7] = {1, 2, 3, 3, 4, 5, 5};
    int brr[6] = {10, 10, 5, 6, 7, 6}; // Change here

    uniqMerge(arr, brr, 7, 6);

    return 0;
}
