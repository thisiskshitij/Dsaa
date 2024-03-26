// // C++ Program to Insert an element
// // at a specific position in an Array

// #include <bits/stdc++.h>
// using namespace std;

// // Function to insert element
// // at a specific position
// void insertElement(int arr[], int n, int x, int pos)
// {
//     // shift elements to the right
//     // which are on the right side of pos
//     for (int i = n - 1; i >= pos; i--)
//         arr[i + 1] = arr[i];

//     arr[pos] = x;
// }

// // Driver's code
// int main()
// {
//     int arr[15] = {2, 4, 1, 8, 5};
//     int n = 5;

//     cout << "Before insertion : ";
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";

//     cout << endl;

//     int x = 10, pos = 2;

//     // Function call
//     insertElement(arr, n, x, pos);
//     n++;

//     cout << "After insertion : ";
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";

//     return 0;
// }

// deletion

// searching

#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int key)
{
    int s = 0;
    int e = size;

    while (s <= e)
    {
        int mid = (s + e) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
            s = mid + 1;
    }
    return -1;
}

int main()
{

    int n;
    cin >> n;
    int arr[n];
    // input
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;

    cout << "Enter key";
    int key;
    cin >> key;

    cout << binarySearch(arr, n, key);

    // display

    // cout << "Displaying elements: ";
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
}