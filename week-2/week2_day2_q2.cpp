#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double angle = M_PI / 4;

    cout << fixed << setprecision(3);

    cout << "sin(45°) = " << sin(angle) << endl;
    cout << "cos(45°) = " << cos(angle) << endl;
    cout << "tan(45°) = " << tan(angle) << endl;

    return 0;
}
