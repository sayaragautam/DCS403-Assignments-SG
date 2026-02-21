#include <iostream>
using namespace std;
const int SIZE = 5;
int cq[SIZE];
int front = -1;
int rear = -1;
bool isFull() {
    return ((rear + 1) % SIZE == front);
}
void display() {
    if (front == -1) {
        cout << "Queue is empty." << endl;
        return;
    }
    cout << "Queue elements: ";
    int i = front;
    while (true) {
        cout << cq[i] << " ";
        if (i == rear) break;
        i = (i + 1) % SIZE;
    }
    cout << endl;
}
void enqueue(int value) {
    if (isFull()) {
        cout << "Queue is full. Cannot insert " << value << endl;
        return;
    }
    if (front == -1) {
        front = 0;
    }
    rear = (rear + 1) % SIZE; // Wrap around using modulo
    cq[rear] = value;
    cout << value << " enqueued successfully." << endl;
    display();
}
int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50); // Queue full
    enqueue(60); // Should show "Queue is full"
    return 0;
}