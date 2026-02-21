#include <iostream>
using namespace std;
#define SIZE 5
int queueArr[SIZE];
int front = -1;
int rear = -1;
bool isEmpty() {
    if (front == -1 || front > rear)
        return true;
    else
        return false;
}
bool isFull() {
    if (rear == SIZE - 1)
        return true;
    else
        return false;
}
int main() {
    if (isEmpty())
        cout << "Queue is Empty" << endl;
    else
        cout << "Queue is Not Empty" << endl;
    front = 0;
    rear = SIZE - 1;
    if (isFull())
        cout << "Queue is Full" << endl;
    else
        cout << "Queue is Not Full" << endl;
    return 0;
}