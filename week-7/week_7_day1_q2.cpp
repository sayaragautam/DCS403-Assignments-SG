#include <iostream>
using namespace std;
#define MAX 5
int queueArr[MAX];
int front = -1;
int rear = -1;
void enqueue(int value) {
    if (rear == MAX - 1) {
        cout << "Queue is Full (Overflow)" << endl;
        return;
    }
    if (front == -1) {
        front = 0;
    }
    rear++;
    queueArr[rear] = value;
    cout << value << " inserted successfully." << endl;
    cout << "Updated Queue: ";
    for (int i = front; i <= rear; i++) {
        cout << queueArr[i] << " ";
    }
    cout << endl;
}
int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);
    return 0;
}