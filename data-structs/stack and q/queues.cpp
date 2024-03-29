#include <iostream>
using namespace std;

class Queue
{
public:
    int capacity;
    int *arr;
    int front;
    int rear;

    Queue(int capacity)
    {
        this->capacity = capacity;
        arr = new int[capacity];
        front = 0;
        rear = 0;
    }

    void enqueue(int element)
    {
        if (rear == capacity)
            cout << "queue is full";
        else
            arr[rear] = element;
        rear++;
    }

    // revise
    void dequeue()
    {
        if (rear == front)
            cout << "queue is empty";
        else
        {
            front++;
        }
    }

    void qfront()
    {
        if (rear == front)
            cout << "queue is empty" << endl;
        else
        {
            cout << arr[front] << endl;
        }
    }

    bool isEmpty()
    {
        if (rear == front)
            cout << "queue is empty" << endl;
        else
            cout << "queue is not empty" << endl;
    }
    void display()
    {
        for (int i = 0; i < rear; i++)
        {
            cout << arr[i] << " ";
        }
    }
};

int main()
{
    Queue qu(10);

    qu.enqueue(10);
    qu.enqueue(3);
    qu.enqueue(7);
    qu.enqueue(11);
    // qu.enqueue(11);

    // qu.qfront();
    // qu.dequeue();
    // qu.qfront();

    qu.display();
}