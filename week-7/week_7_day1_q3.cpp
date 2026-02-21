#include <iostream>
using namespace std;
#define MAX 5
int queueArr[MAX];
int front = -1;
int rear = -1;
void dequeue() {
    if (front == -1 || front > rear) {
        cout << "Queue is Empty (Underflow)" << endl;
        return;
    }
    cout << queueArr[front] << " removed successfully." << endl;
    front++;
    if (front > rear) {
        front = -1;
        rear = -1;
    }
    if (front == -1) {
        cout << "Queue is now empty." << endl;
    } else {
        cout << "Updated Queue: ";
        for (int i = front; i <= rear; i++) {
            cout << queueArr[i] << " ";
        }
        cout << endl;
    }
}
int main() {
    front = 0;
    rear = 2;
    queueArr[0] = 10;
    queueArr[1] = 20;
    queueArr[2] = 30;
    dequeue();  // removes 10
    dequeue();  // removes 20
    dequeue();  // removes 30
    dequeue();  // shows underflow
    return 0;
}