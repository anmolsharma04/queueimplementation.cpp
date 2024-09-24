#include <iostream>
using namespace std;

class Queue {
public:
    int front;
    int rear;
    int arr[100];  // Array to store queue elements

    // Constructor to initialize front and rear
    Queue() {
        front = -1;  // -1 indicates the queue is empty
        rear = -1;
    }

    // Check if the queue is empty
    bool isempty() {
        return (front == -1);
    }

    // Check if the queue is full
    bool isfull() {
        return (rear == 99);  // Queue is full if rear reaches the max size
    }

    // Add an element to the queue (enqueue)
    void enqueue(int value) {
        if (isfull()) {
            cout << "Queue is full" << endl;
        } else {
            if (front == -1) {
                front = 0;  // Set front to 0 if first element is added
            }
            rear++;
            arr[rear] = value;
            cout << value << " enqueued." << endl;
        }
    }

    void dequeue(){
        if(isempty()){
            cout<<"unable to dequeue from the queue"<<endl;
        }

        else{
            front++;
        }

    }




    // Print the elements of the queue
    void print() {
        if (isempty()) {
            cout << "Queue is empty" << endl;
        } else {
            cout << "Queue elements: ";
            for (int i = front; i <= rear; i++) {  // Loop from front to rear (inclusive)
                cout << arr[i] << " ";  // Print each element with a space
            }
            cout << endl;
        }
    }
};

int main() {
    Queue q;

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.dequeue();
    q.dequeue();

    q.print();  // Print queue contents

    return 0;
}
