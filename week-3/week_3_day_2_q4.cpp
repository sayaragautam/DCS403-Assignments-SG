#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {                 // controls rows
        for (int j = 0; j < i; j++) {               // controls letters
            cout << char('A' + j) << " ";
        }
        cout << endl;
    }
    return 0;
}
