#include <iostream>
using namespace std;
int main() {
    int A[2][3], B[3][2], C[2][2];
    cout << "Enter elements of matrix A (2x3):\n";
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> A[i][j];
        }
    }
    cout << "Enter elements of matrix B (3x2):\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            cin >> B[i][j];
        }
    }
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            C[i][j] = 0;
            for(int k = 0; k < 3; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    cout << "Result matrix C:\n";
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
