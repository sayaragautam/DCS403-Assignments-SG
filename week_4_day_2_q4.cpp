#include <iostream>
using namespace std;
int main() {
    int arr[3][3];
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            cin >> arr[i][j];

    for(int i = 0; i < 3; i++) {
        int max = arr[i][0];
        for(int j = 1; j < 3; j++) {
            if(arr[i][j] > max)
                max = arr[i][j];
        }
        cout << max << " ";
    }
    return 0;
}
