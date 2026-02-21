#include <iostream>
using namespace std;
#define MAX 5
int queueArr[MAX];
int front = -1;
int rear = -1;
void peek() {
    if (front == -1 || front > rear) {
        cout << "Queue is Empty" << endl;
        return;
    }
    cout << "Front element is: " << queueArr[front] << endl;
}
int main() {
    front = 0;
    rear = 2;
    queueArr[0] = 10;
    queueArr[1] = 20;
    queueArr[2] = 30;
    peek();
    return 0;
}