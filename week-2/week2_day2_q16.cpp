#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence = "This  is   a test";
    int words = 0;
    bool inWord = false;

    for (char ch : sentence) {
        if (!isspace(ch)) {
            if (!inWord) {
                words++;      // Start of a new word
                inWord = true;
            }
        } else {
            inWord = false;   // End of a word
        }
    }

    cout << "Number of words: " << words;

    return 0;
}
