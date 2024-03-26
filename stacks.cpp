#include <iostream>
using namespace std;

class Stack
{
public:
    int *arr;
    int capactiy;
    int top;

    Stack(int capactiy)
    {
        this->capactiy = capactiy;
        arr = new int[capactiy];
        top = -1;
    }

    void push(int element)
    {
        if (capactiy - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack overflow";
        }
    }
    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack underflow";
        }
    }

    void peek()
    {
        if (top >= 0)
            cout << arr[top];
        else
            cout << "Stack is empty";
    }

    bool isEmpty()
    {
        if (top >= 0)
        {
            cout << "Stack is not empty";
        }
        else
        {
            cout << "Stack is empty";
        }
    }
    void display(){
        for (int i=0;i<capactiy;i++){
            cout << arr[i]<<" ";
        }
    }
};

int main(){
    Stack st(5);
    st.push(22);
    st.push(43);
    st.push(45);
    st.push(66);
    st.push(66);
  
    
    // st.pop();
    // st.peek();
    st.display();
    
}
