#include <iostream>
using namespace std;
#define MAX 5
int myQueue[MAX];
int front = -1;
int rear = -1;
void enqueue(int value) {
    if (rear == MAX - 1) {
        cout << "Queue is Full (Overflow)\n";
        return;
    }
    if (front == -1)
        front = 0;
    rear++;
    myQueue[rear] = value;
    cout << value << " inserted into queue\n";
}
void dequeue() {
    if (front == -1 || front > rear) {
        cout << "Queue is Empty (Underflow)\n";
        return;
    }
    cout << myQueue[front] << " removed from queue\n";
    front++;
}
void display() {
    if (front == -1 || front > rear) {
        cout << "Queue is Empty\n";
        return;
    }
    cout << "Queue elements: ";
    for (int i = front; i <= rear; i++) {
        cout << myQueue[i] << " ";
    }
    cout << endl;
}
int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    display();
    return 0;
}