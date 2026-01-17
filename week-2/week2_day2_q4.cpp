#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char ch = '@';

    if (isalpha(ch)) {
        cout << ch << " is a letter.";
    }
    else if (isdigit(ch)) {
        cout << ch << " is a digit.";
    }
    else if (ispunct(ch)) {
        cout << ch << " is a special character.";
    }
    else {
        cout << ch << " is neither letter nor digit.";
    }

    return 0;
}
