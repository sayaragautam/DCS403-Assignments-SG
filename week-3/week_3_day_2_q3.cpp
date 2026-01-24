#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {          // controls rows
        for (int j = 1; j <= i; j++) {      // prints numbers
            cout << j;
        }
        cout << endl;
    }
    return 0;
}
