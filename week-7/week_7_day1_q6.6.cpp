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
int main() {
    cq[0] = 10; front = 0; rear = 0;
    cq[1] = 20; rear = 1;
    cq[2] = 30; rear = 2;
    cq[3] = 40; rear = 3;
    cq[4] = 50; rear = 4;
    if (isFull()) {
        cout << "Queue is full." << endl;
    } else {
        cout << "Queue is not full." << endl;
    }
    if (isEmpty()) {
        cout << "Queue is empty." << endl;
    } else {
        cout << "Queue is not empty." << endl;
    }
    front = rear = -1;
    if (isEmpty()) {
        cout << "Queue is empty after reset." << endl;
    }
    return 0;
}