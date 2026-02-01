#include <iostream>
using namespace std;
int main() {
    int arr[3][3];
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            cin >> arr[i][j];
    for(int i = 0; i < 3; i++) {
        int start = 0, end = 2;
        while(start < end) {
            int temp = arr[i][start];
            arr[i][start] = arr[i][end];
            arr[i][end] = temp;
            start++;
            end--;
        }
    }
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
    return 0;
}
