#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string str = "madam";
    string revStr = str; // Make a copy of the string

    // Reverse the copy
    reverse(revStr.begin(), revStr.end());

    // Compare original and reversed strings
    if (str == revStr) {
        cout << "The string is a palindrome.";
    } else {
        cout << "The string is not a palindrome.";
    }

    return 0;
}
