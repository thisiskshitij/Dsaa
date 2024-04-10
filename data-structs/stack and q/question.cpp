#include <iostream>
#include <vector>
using namespace std;

class Stack
{
public:
    vector<int> stack;
    void push(int element)
    {
        cout << "pushing element " << element << " on the stack";
        stack.push_back(element);
    }

    void pop()
    {
        int pop = stack.back();
        cout << "element " << pop << " popped from the stack";
        if (stack.empty())
        {
            cout << "cannot pop, stack is underflow";
        }
        else
        {
            stack.pop_back();
        }
    }
    void display()
    {
        if (stack.empty())
        {
            cout << "Stack is empty";
        }
        else
        {
            cout << "elements in the stack: ";
            for (int i = stack.size() - 1; i >= 0; i--)
            {
                cout << stack[i] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Stack stack;
    while (true)
    {
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            int data;
            cin >> data;
            stack.push(data);
            break;

        case 2:
            stack.pop();
            break;
        case 3:
            stack.display();
            break;
        case 4:
            cout << "exiting the program";
            return 0;
            break;

        default:
            cout << "Invalid choice";
        }
    }
    return 0;
}