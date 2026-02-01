#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    int lotto[6];
    bool duplicate;
    srand(time(0));
    for (int i = 0; i < 6; i++) {
        do {
            duplicate = false;
            lotto[i] = rand() % 50 + 1;
            for (int j = 0; j < i; j++) {
                if (lotto[i] == lotto[j]) {
                    duplicate = true;
                    break;
                }
            }
        } while (duplicate);
    }
    cout << "Lotto Numbers: ";
    for (int i = 0; i < 6; i++) {
        cout << lotto[i] << " ";
    }

    return 0;
}
