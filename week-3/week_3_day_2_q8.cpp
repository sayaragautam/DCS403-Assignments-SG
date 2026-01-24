#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the size of the square: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {          // rows
        for (int j = 1; j <= n; j++) {      // columns
            if (i == 1 || i == n || j == 1 || j == n) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
