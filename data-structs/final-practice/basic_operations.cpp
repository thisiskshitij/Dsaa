#include <iostream>
#include <algorithm>
#include <limits.h>
using namespace std;

// display function

void displayArrayEle(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}

int insertAtIndex(int arr[], int &n, int key, int pos)
{
	n++;
	for (int i = n - 1; i >= pos; i--)
	{
		arr[i + 1] = arr[i];
	}
	arr[pos] = key;
	return n;
}

void mergeArray(int arr[], int &size1, int brr[], int &size2)
{
	int crr[size1 + size2];

	for (int i = 0; i < size1; i++)
	{
		crr[i] = arr[i];
	}

	for (int i = 0; i < size2; i++)
	{
		crr[i + size1] = brr[i];
	}
	displayArrayEle(crr, size1 + size2);
}

bool searchArrayEle(int arr[], int size, int key)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == key)
		{
			return true;
		}
	}
	return false;
}

int deleteElement(int arr[], int &size, int index)
{
	for (int i = index; i < size; i++)
	{
		arr[i] = arr[i + 1];
	}
	size--;
	return size;
}

int deleteElementKey(int arr[], int &size, int key)
{
	int indexKey;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == key)
		{
			indexKey = i;
		}
	}

	for (int i = indexKey; i < size; i++)
	{
		arr[i] = arr[i + 1];
	}
	size--;
	return size;
}

void sortArray(int arr[],int n){
	sort(arr,arr+n,greater<int>());
}

int MaxElement(int arr[],int n){
int max = INT_MIN;
	for (int i=0;i<n;i++){
		if (arr[i]>max){
			max = arr[i];
			}
	}
return max;
}
int main()
{

	int n = 5;
	int m = 5;
	// cout <<"Enter size of the array: ";
	// cin >> n;

	int arr[n] = {1, 2, 3, 4, 5};
	int brr[m] = {6, 7, 8, 9, 10};
	// for (int i = 0;i<n;i++){
	// 	int element;
	// 	cin >> element;
	// 	arr[i] = element;
	// }

	// displayArrayEle(arr, n);
	// cout << endl;
	// insertAtIndex(arr, n, 7, 2);
	// displayArrayEle(arr, n);
	// mergeArray(arr,n,brr,m);

	// if(searchArrayEle(arr,n,9)){
	//	cout <<"Key found !!";
	// }
	// else{
	//	cout <<"Key not found !!";
	// }

	// deleteElement(arr,n,2);

	//deleteElementKey(arr, n, 3);
	sortArray(brr,m);
	
	cout << MaxElement(brr,n);
	// displayArrayEle(brr, n);


	return 0;
}
