#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    for (int i = n; i >= 1; i--) {          // controls rows
        for (int j = 1; j <= i; j++) {      // prints stars
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
