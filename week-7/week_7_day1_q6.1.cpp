#include <iostream>
using namespace std;
const int SIZE = 5;
int cq[SIZE];
int front = -1;
int rear = -1;
bool isFull() {
    return ((rear + 1) % SIZE == front);
}
bool isEmpty() {
    return (front == -1);
}
void enqueue(int value) {
    if (isFull()) {
        cout << "Queue is full. Cannot insert " << value << endl;
        return;
    }
    if (isEmpty()) {
        front = 0;
    }
    rear = (rear + 1) % SIZE;
    cq[rear] = value;
    cout << value << " enqueued." << endl;
}
void dequeue() {
    if (isEmpty()) {
        cout << "Queue is empty. Cannot dequeue." << endl;
        return;
    }
    cout << cq[front] << " dequeued." << endl;
    if (front == rear) {
        front = rear = -1;
    } else {
        front = (front + 1) % SIZE;
    }
}
void display() {
    if (isEmpty()) {
        cout << "Queue is empty." << endl;
        return;
    }
    cout << "Queue elements: ";
    int i = front;
    while (true) {
        cout << cq[i] << " "; // use cq
        if (i == rear) break;
        i = (i + 1) % SIZE;
    }
    cout << endl;
}
int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50); // Queue full
    display();
    dequeue();
    dequeue();
    display();
    enqueue(60);
    enqueue(70); // Wrap-around works
    display();
    return 0;
}