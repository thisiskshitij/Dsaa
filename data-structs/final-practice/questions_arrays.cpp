#include <iostream>
#include <algorithm>
using namespace std;

void mergeAlt(int arr[], int n, int brr[], int m)
{
    int crr[n + m];

    int index = 0;
    for (int i = 0; i < n; i++)
    {
        crr[index] = arr[i];
        index += 2;
    }
    index = 1;
    for (int i = 0; i < n; i++)
    {
        crr[index] = brr[i];
        index += 2;
    }

    for (int i = 0; i < n + m; i++)
    {
        cout << crr[i] << " ";
    }
}

bool palindrome(string car, int n)
{
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        if (car[s] != car[e])
        {
            return false;
        }
        return true;
    }
}

void commonDel(int arr[], int &n, int brr[], int m)
{

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == brr[i])
            {
                for (int k = j; k < n - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }
                n--;
                j--;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

// void removeDuplicatesMerge(int arr[],int size1,int brr[],int size2){

// }

void uniqArray(int arr[], int size)
{
    int uniqCount = 0;
    int uniqArr[size];

    for (int i = 0; i < size; i++)
    {
        bool duplicate = false;
        for (int j = 0; j < uniqCount; j++)
        {
            if (uniqArr[j] == arr[i])
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
    cout << endl;
    cout << uniqCount - 1 << endl;
    cout << (size - 1) - (uniqCount - 1);
}
int main()
{
    int m = 5;
    int n = 6;

    int arr[m] = {3, 7, 12, 3, 5};
    sort(arr,arr+m,greater<int>());
    
    for (int i=0;i<m;i++){
        cout << arr[i] <<" ";
    }
    // int brr[n] = {9, 18, 3, 6, 20, 12};
    // commonDel(arr, n, brr, m);
    // uniqArray(arr, m);
    return 0;
}