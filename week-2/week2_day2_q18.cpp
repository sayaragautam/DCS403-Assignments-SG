#include <iostream>
#include <algorithm> // for sort()
#include <string>
using namespace std;

int main() {
    string str1 = "listen";
    string str2 = "silent";

    // If lengths are different, they can't be anagrams
    if (str1.length() != str2.length()) {
        cout << "Strings are not anagrams.";
        return 0;
    }

    // Sort both strings
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    // Compare sorted strings
    if (str1 == str2) {
        cout << "Strings are anagrams.";
    } else {
        cout << "Strings are not anagrams.";
    }

    return 0;
}
