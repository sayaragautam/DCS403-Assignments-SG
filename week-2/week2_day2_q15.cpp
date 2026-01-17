#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string str = "C++123 is #1!";
    string result = "";

    for (char ch : str) {
        if (isalpha(ch)) {
            result += ch; // Keep only letters
        }
    }

    cout << result;

    return 0;
}
