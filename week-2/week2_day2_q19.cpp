#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string str = "Education";
    string result = "";

    for (char ch : str) {
        char lowerCh = tolower(ch);
        if (lowerCh != 'a' && lowerCh != 'e' && lowerCh != 'i' &&
            lowerCh != 'o' && lowerCh != 'u') {
            result += ch; // Keep only non-vowel characters
        }
    }

    cout << result;

    return 0;
}
