#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {          // rows
        for (int j = 1; j <= n; j++) {      // columns
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
