#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter size of square matrix: ";
    cin >> n;
    int arr[n][n];
    cout << "Enter elements of the " << n << "x" << n << " matrix:\n";
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> arr[i][j];
    cout << "Boundary elements:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == 0 || i == n-1 || j == 0 || j == n-1)
                cout << arr[i][j] << " ";
        }
    }
    cout << endl;
    return 0;
}
