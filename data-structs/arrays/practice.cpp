#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
void displayArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
};
void searchArray(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << "Key Found";
        }
        cout << "Key not found";
    }
};
int insertElement(int arr[], int &size, int pos, int element)
{
    size++;
    for (int i = size - 1; i > pos; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos] = element;
    return size;
};
void mergeArray(int arr[], int n, int brr[], int m)
{
    int crr[m + n];
    for (int i = 0; i < n; i++)
    {
        crr[i] = arr[i];
    }
    for (int i = n; i < n + m; i++)
    {
        crr[i] = brr[i - n];
    }

    for (int i = 0; i < n + m; i++)
    {
        cout << crr[i] << " ";
    }
};
int deleteArray(int arr[], int &n, int pos)
{
    for (int i = pos; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;
    return n;
};
void evenIndexedElements(int arr[], int size)
{
    int crr[size / 2];
    int index = 0;
    for (int i = 0; i < size; i += 2)
    {
        crr[index] = arr[i];
        index++;
    }

    for (int i = 0; i < index; i++)
    {
        cout << crr[i] << " ";
    }
};
void sortArray(int arr[],int n){
    sort(arr,arr+n);
    cout << "Ascending order"<<endl;;
    for (int i=0;i<n;i++){
        cout << arr[i] <<" ";
    }
    cout << endl;
    sort(arr,arr+n,greater<int>());
    cout << "Descending order" <<endl;
    for (int i=0;i<n;i++){
        cout << arr[i]<< " ";
    }
};
int maxElementMinElement();
void mergeAltElement();
void palindromeOrNot();

int main()
{
    int n = 5;
    int m = 5;

    int arr[n] = {45, 89, 12, 45, 65};
    int brr[m] = {12, 56, 78, 94, 55};
    // insertElement(arr, n, 1, 2);
    // mergeArray(arr, n, brr, n);
    // deleteArray(arr, n, 2);
    // displayArray(arr, n);
    // evenIndexedElements(arr, n);
    sortArray(arr,n);
    return 0;
}