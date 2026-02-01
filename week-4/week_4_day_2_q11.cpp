#include <iostream>
using namespace std;
int main() {
    int arr[3][2];
    int rows = 3, cols = 2;
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            cin >> arr[i][j];
    for(int j = 0; j < cols; j++) {
        int top = 0, bottom = rows - 1;
        while(top < bottom) {
            int temp = arr[top][j];
            arr[top][j] = arr[bottom][j];
            arr[bottom][j] = temp;
            top++;
            bottom--;
        }
    }
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
    return 0;
}
