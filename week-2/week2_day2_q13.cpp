#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string str = "Programming";
    int freq[26] = {0}; // Array to store frequency of letters

    for (char ch : str) {
        if (isalpha(ch)) {
            ch = tolower(ch);      // Convert to lowercase
            freq[ch - 'a']++;      // Increment count
        }
    }

    // Print frequencies
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            cout << char(i + 'a') << ":" << freq[i] << "  ";
        }
    }

    return 0;
}
