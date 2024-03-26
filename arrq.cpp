// #include <iostream>
// using namespace std;
// void display(int arr[],int n){
//     for (int i=0;i<n;i++)
//         cout << arr[i] <<" ";
// }

// void rotateArray(int arr[],int n,int k){
//     int temp[n];
//     for (int i=0;i<n;i++){
//         temp[(i+k)%n] = arr[i];
//     }

//     //copy temp to arr
//     for (int i = 0; i < n; i++) {
//         arr[i] = temp[i];
//     }
// }

// void addArrays(int arr[],int brr[],int a,int b){

// int i=n-1;
// int j=m-1;

// }

// int main()
// {
//     int n=5;
//     int arr[n] = {1,2,3,4,5};
//     int brr[n] = {6,7,8,9,10};

//     int m = 2;

// rotateArray(arr,n,m);
// display(arr,n);
//     return 0;
// }

// #include <iostream>
// #include <algorithm>
// using namespace std;

// void display(int arr[],int n){
//     for (int i=0;i<n;i++)
//         cout << arr[i] <<" ";
// }

// int main()
// {
//     int n,m;
//     cout << "Enter n of ele for 1st arr: ";
//     cin >> n;
//     cout << "Enter n of ele for 2nd arr: ";
//     cin >> m;

//     int arr[n],brr[m];

//     cout << "Enter elements for 1st arr: ";
//     for (int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     cout << "Enter elements for 2nd arr: ";
//      for (int i=0;i<n;i++){
//         cin >> brr[i];
//     }

//     display(arr,n);
//     cout << endl;
//     display(brr,m);

//     int crr[n+m];
//     for (int i=0;i<n;i++){
//         crr[i]=arr[i];
//     }
//     for (int i=n;i<n+m;i++){
//         crr[i]=brr[i-n];
//     }

//     display(crr,n+m);
//     return 0;
// }

// array reversal
//  #include <iostream>
//  using namespace std;
//  void display(int arr[],int n){
//      for (int i=0;i<n;i++)
//          cout << arr[i] <<" ";
//  }
//  int main()
//  {
//      int n = 5;
//      int arr[n] = {1, 2, 3, 4, 5};

//     int s = 0;
//     int e = n-1;
//     while (s <= e)
//     {
//         swap(arr[s],arr[e]);
//         s++;
//         e--;
//     }
// display(arr,n);
//     return 0;
// }

// // array merge and sort

// #include <iostream>
// #include <algorithm>
// using namespace std;
// void display(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
// }
// int main()
// {
//     int n = 5;
//     int m = 5;
//     int arr[n] = {59,56,112,48,78};
//     int brr[m] = {52,48,63,448,15};
//     int crr[n + m];

//     for (int i = 0; i < n; i++)
//         crr[i] = arr[i];

//     for (int i = n; i < n + m; i++)
//     {
//         crr[i] = brr[i - n];
//     }

//     sort(crr,crr+n+m);
//     display(crr, n + m);
// }

// prompt user for n students and n subs and cout << avg marks for each student

// #include <iostream>
// #include <limits.h>
// using namespace std;
// void display(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
// }

// int largest(int arr[], int size)
// {
//     int largest = INT_MIN;
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] > largest)
//         {
//             largest = arr[i];
//         }
//     }
//     return largest;
// }
// int smallest(int arr[], int size)
// {
//     int smallest = INT_MAX;
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] < smallest)
//         {
//             smallest = arr[i];
//         }
//     }
//     return smallest;
// }
// void uniqueElement(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         int count = 0;
//         for (int j = 0; j < size; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 count++;
//             }
//         }
//         if (count == 1)
//         {
//             cout << arr[i] << " ";
//         }
//     }
// }

// void freqEle(int arr[], int n)
// {
//     int freq[n] = {};
//     int visited = -1;

//     for (int i = 0; i < n; i++)
//     {
//         int count = 1;
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 count++;
//                 freq[j] = visited;
//             }
//         }
//         if (freq[i] != visited)
//         {
//             freq[i] = count;
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         if (freq[i] != visited)
//         {
//             cout << arr[i] << " " << freq[i] << endl;
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << freq[i] << " ";
//     }
// }

// void freq(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         int curr = arr[i];
//         int count = 0;
//         for (int j = 0; j < size; j++)
//         {
//             if (arr[j] == curr)
//             {
//                 count++;
//                 arr[j] = -1;
//             }
//         }
//         if(arr[i]!=-1)
//         cout << curr << " " << count;
//     }
// }

// int main()
// {
//     int arr[] = {1, 2, 2, 3, 4, 4, 4, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     freq(arr, n);
//     return 0;
// }

// int main()
// {
//     int n = 10;
//     int arr[n] = {15, 56, 49, 44, 49, 49, 39, 15, 12, 9};
//     // cout << largest(arr, n) << endl;
//     // cout << smallest(arr, n) <<endl;
//     // uniqueElement(arr, n);
//     freqEle(arr, n);

//     return 0;
// }

// merge alternatively


// not working
#include <iostream>
#include <algorithm>
using namespace std;

void mergeAlt(int arr[], int brr[], int crr[], int n, int m)
{
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        crr[index] = arr[i];
        index = index + 2;
    }
    index = 1;
    for (int i = 0; i < m; i++)
    {
        crr[index] = brr[i];
        index = index + 2;
    }
}
void display(int arr[], int n)

{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
int mergeS(int arr[], int brr[], int n, int m)
{

    int crr[n + m] = {};
    for (int i = 0; i < n; i++)
        crr[i] = arr[i];

    for (int i = n; i < n + m; i++)
    {
        crr[i] = brr[i - n];
    }
    return crr[n+m];
}

void bubbleSort(int arr[],int n){
      int counter = 1;
    while (counter < n)
    {
        for (int i = 0; i <= counter; i++)
        {
            if (arr[i] > arr[i + 1])
                swap(arr[i], arr[i + 1]);
        }
        counter++;
    }
}

void sortOddEvenAscDesc(int arr[], int n)

{

    int f = 3;
    int g = 3;
    int brr[f];
    int crr[g];

    int index = 0;
    for (int i = 0; i < n; i++)
    {
        brr[i] = arr[index];
        index += 2;
    }
    index = 1;
    for (int i = 0; i < n; i++)
    {
        crr[i] = arr[index];
        index += 2;
    }

    sort(brr, brr + f);
    bubbleSort(crr,g);

    // merging both

   mergeS(crr,brr,3,3);
   display(arr,n);

    
}

int main()
{
    int n = 6;
    // int m = 5;
    int arr[n] = {59, 56, 112, 48, 78, 2};
    // int brr[m] = {52, 48, 63, 448, 15};
    // int crr[n + m];

    // mergeAlt(arr,brr,crr,n,m);
    // display(crr, n + m);
    sortOddEvenAscDesc(arr, n);
    // display(arr, n);
    return 0;
}