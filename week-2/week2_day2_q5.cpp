#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char ch = 'a';

    if (islower(ch)) {
        cout << "Uppercase: " << (char)toupper(ch);
    }
    else if (isupper(ch)) {
        cout << "Lowercase: " << (char)tolower(ch);
    }
    else {
        cout << "Not an alphabet character";
    }

    return 0;
}
