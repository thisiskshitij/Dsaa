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