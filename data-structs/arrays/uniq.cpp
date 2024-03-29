#include <iostream>
using namespace std;
int main()
{
    int n = 7;
    int arr[n] = {2, 5, 3, 7, 2, 5, 3}; // Your original array with 7 integers

    int uniq[n];       // Array to store unique elements
    int uniqCount = 0; // Counter for unique elements

    for (int i = 0; i < n; i++)
    {
        bool isDuplicate = false;
        // Check if the current element is a duplicate
        for (int j = 0; j < uniqCount; ++j)
        {
            if (arr[i] == uniq[j])
            {
                isDuplicate = true;
                break;
            }
        }
        // If not a duplicate, add it to uniqueElements
        if (!isDuplicate)
        {
            uniq[uniqCount] = arr[i];
            uniqCount++;
        }
    }

    // Output the unique elements
    cout << "Unique elements from the original array are: ";
    for (int i = 0; i < uniqCount; ++i)
    {
        cout << uniq[i] << " ";
    }
    cout << endl;

    return 0;
}
