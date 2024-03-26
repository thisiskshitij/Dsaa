#include <iostream>
#include <string>
using namespace std;

// reads two sets of strings from the user, merges them into a single array



int main() {
    // Read the number of strings in the first set
    int n;
    cin >> n;
    cin.ignore(); // Ignore the newline character after reading an integer

    // Declare an array to store the first set of strings
    string arr[n];

    // Read each string in the first set
    for (int i = 0; i < n; i++) {
        getline(cin, arr[i]);
    }

    // Read the number of strings in the second set
    int m;
    cin >> m;
    cin.ignore(); // Ignore the newline character after reading an integer

    // Declare an array to store the second set of strings
    string arr2[m];

    // Read each string in the second set
    for (int i = 0; i < m; i++) {
        getline(cin, arr2[i]);
    }

    // Merge the two sets of strings into a single array
    string arr3[n + m];
    int count = 0;
    for (int i = 0; i < n; i++) {
        arr3[count++] = arr[i];
    }
    for (int i = 0; i < m; i++) {
        arr3[count++] = arr2[i];
    }

    // Output the merged array
    cout << "Catalog:" << endl;
    for (int i = 0; i < count; i++) {
        cout << arr3[i] << endl;
    }

    return 0;
}
