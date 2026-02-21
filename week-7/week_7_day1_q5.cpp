#include <iostream>
using namespace std;
#define MAX 5
int queueArr[MAX];
int front = -1;
int rear = -1;
void display() {
    if (front == -1 || front > rear) {
        cout << "Queue is Empty" << endl;
        return;
    }
    cout << "Queue elements: ";
    for (int i = front; i <= rear; i++) {
        cout << queueArr[i] << " ";
    }
    cout << endl;
}
int main() {
    front = 0;
    rear = 3;
    queueArr[0] = 10;
    queueArr[1] = 20;
    queueArr[2] = 30;
    queueArr[3] = 40;
    display();
    return 0;
}