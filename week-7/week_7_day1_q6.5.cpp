#include <iostream>
using namespace std;
const int SIZE = 5;
int cq[SIZE];
int front = -1;
int rear = -1;
bool isEmpty() {
    return (front == -1);
}
void display() {
    if (isEmpty()) {
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
int main() {
    cq[0] = 10; front = 0; rear = 0;
    cq[1] = 20; rear = 1;
    cq[2] = 30; rear = 2;
    cq[3] = 40; rear = 3;
    display();
    return 0;
}