#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a = 1, b = -3, c = 2;
    double D, x1, x2;

    D = b * b - 4 * a * c;

    if (D > 0) {

        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);
        cout << "Roots are real and distinct: " << x1 << " and " << x2;
    }
    else if (D == 0) {

        x1 = x2 = -b / (2 * a);
        cout << "Roots are real and equal: " << x1;
    }
    else {

        double realPart = -b / (2 * a);
        double imagPart = sqrt(-D) / (2 * a);
        cout << "Roots are imaginary: " << realPart << " + " << imagPart << "i and "
             << realPart << " - " << imagPart << "i";
    }

    return 0;
}
