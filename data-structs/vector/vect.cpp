// #include <vector>
// #include <iostream>
// using namespace std;

// void reverseArray(vector<int> v)
// {
//     int s = 0;
//     int e = v.size() - 1;
//     while (s <= e)
//     {
//         swap(v[s], v[e]);
//         s++;
//         e--;
//     }
//     for (int i = 0; i < v.size(); i++)
//     {

//         cout << v[i] << " ";
//     }
// }
// void evenIndexedEle(vector<int> v)
// {
//     vector<int> c;
//     int index = 0;

//     for (int i = 0; i < v.size(); i++)
//     {
//         if (index < v.size())
//         {
//             c.push_back(v[index]);
//             index += 2;
//         }
//     }

//     for (int i = 0; i < c.size(); i++)
//     {
//         cout << c[i] << " ";
//     }
// }

// int main()
// {
//     vector<int> v;
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         int element;
//         cin >> element;
//         v.push_back(element);
//     }
//     // reverseArray(v);
//     evenIndexedEle(v);
//     return 0;
// }


#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define MAX_INPUT_SIZE 1024

int main() {
    char input[MAX_INPUT_SIZE];
    char ch;
    int index = 0;

    printf("Enter data. Type '$' to stop:\n");

    // Read input until '$' is encountered
    while ((ch = getchar()) != '$') {
        // Check if input array is full
        if (index >= MAX_INPUT_SIZE - 1) {
            fprintf(stderr, "Input limit reached. Exiting...\n");
            exit(EXIT_FAILURE);
        }
        input[index++] = ch;
    }
    input[index] = '\0'; // Null-terminate the input string

    // Open file for writing
    int fd = open("input.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd == -1) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    // Write input to file
    if (write(fd, input, index) == -1) {
        perror("Error writing to file");
        close(fd);
        exit(EXIT_FAILURE);
    }

    printf("Input saved to input.txt\n");

    // Close file
    close(fd);

    return 0;
}
// program to create a thread and print number from 0 to n where the val of n must be passed from the main program and the main process also wait for the thread to finish first
// and also print 17 to 21

// program to create a thread which passes more than one input from main program
// and for passing multiple inputs from the thread create a structure which includes all the variables needed for the structure