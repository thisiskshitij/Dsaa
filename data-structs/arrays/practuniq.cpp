// remove find uniq elements in an array and store it in another array

#include <iostream>
using namespace std;

int main()
{
    int n = 7;
    int originalArr[n] = {1, 2, 3, 3, 2, 5, 4};

    int UniqArr[n];
    int uniqCount = 0;
    for (int i = 0; i < n; ++i)
    {
        bool isDuplicate = false;
        for (int j = 0; j < uniqCount; ++j)
        {
            if (originalArr[i] == UniqArr[j])
            {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate)
        {
            UniqArr[uniqCount] = originalArr[i];
            uniqCount++;
        }
    }

    for (int i = 0; i < uniqCount; ++i)
    {
        cout << UniqArr[i] << " ";
    }
    return 0;
}