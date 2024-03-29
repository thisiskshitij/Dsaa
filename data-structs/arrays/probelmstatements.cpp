// Reverse elements of an array and store it in another array.

#include <iostream>
#include <algorithm>
using namespace std;

// rev an array and store it in another
// int main()
// {
//     char arr[5] = {'a', 'b', 'c', 'd', 'e'};
//     char arr1[5];
//     for (int i = 0; i < 5; ++i)
//     {
//         arr1[i] = arr[4 - i]; // Assign elements in reverse order
//     }

//     for (int k = 0; k < 5; ++k)
//     {
//         cout << arr1[k];
//     }
// }

// second largest element in an array.
//  int main(){
//      int n =5;
//      int arr[n] = {54, 48, 75, 42, 65};
//      sort(arr, arr + n);
//      for (int k = 0; k < 5; ++k){
//          cout << arr[k] << " ";
//      }
//      // cout << "Second largest element" << arr[1];
//  }
int deleteElement(int arr[], int &size, int pos)
{
    for (int i = pos; i <= size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    size--;
    return size;
}
// delete element from a position.
int main()
{
    int n = 5;
    int arr[n] = {54, 48, 75, 42, 65};

    deleteElement(arr, n, 2);
    for (int k = 0; k < n; ++k)
    {
        cout << arr[k] << " ";
    }
    cout << endl;
    cout << n;
}