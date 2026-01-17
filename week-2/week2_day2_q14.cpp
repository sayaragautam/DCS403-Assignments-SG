#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string str = "hello world";

    for (int i = 0; i < str.length(); i++) {
        if (isalpha(str[i])) { // Only change letters
            if (i % 2 == 0) {
                str[i] = tolower(str[i]); // Even index → lowercase
            } else {
                str[i] = toupper(str[i]); // Odd index → uppercase
            }
        }
    }

    cout << str;

    return 0;
}
