// Question 1
// program to create a thread and print number from 0 to n where the val of n must be passed from the main program 
// and the main process also wait for the thread to finish first
// and also print 17 to 21


// Question 2
// program to create a thread which passes more than one input from main program
// and for passing multiple inputs from the thread create a structure which includes all the variables needed for the structure

// #include <stdio.h>
// #include <stdlib.h>
// #include <unistd.h>

// Function to print numbers from 0 to n
// void print_numbers(int n) {
//     for (int i = 0; i <= n; i++) {
//         printf("%d\n", i);
//     }
// }

// int main() {
//     int n;

//     printf("Enter a number: ");
//     scanf("%d", &n);

//     // Fork a child process
//     pid_t pid = fork();

//     if (pid < 0) {
//         perror("Fork failed");
//         return EXIT_FAILURE;
//     } else if (pid == 0) { // Child process
//         // Print numbers from 0 to n
//         print_numbers(n);
//         exit(EXIT_SUCCESS);
//     } else { // Parent process
//         // Wait for the child process to finish
//         wait(NULL);
        
//         // Print numbers from 17 to 21
//         for (int i = 17; i <= 21; i++) {
//             printf("%d\n", i);
//         }
//     }

//     return EXIT_SUCCESS;
// }





#include <stdio.h>

// Structure to hold multiple inputs
typedef struct {
    int input1;
    float input2;
    char input3;
} ThreadInputs;

// Function to process inputs
void processInputs(ThreadInputs *inputs) {
    // Accessing inputs from the structure
    printf("Received inputs in the function:\n");
    printf("Input 1: %d\n", inputs->input1);
    printf("Input 2: %f\n", inputs->input2);
    printf("Input 3: %c\n", inputs->input3);
}

int main() {
    ThreadInputs inputs;

    // Assigning values to inputs
    inputs.input1 = 10;
    inputs.input2 = 3.14;
    inputs.input3 = 'A';

    // Calling function and passing inputs
    processInputs(&inputs);

    printf("Function finished execution\n");

    return 0;
}

