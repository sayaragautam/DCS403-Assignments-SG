#include <iostream>
#include <sstream>   // for stringstream
#include <string>
using namespace std;

int main() {
    string sentence = "C++ programming is amazing";
    string word, longestWord = "";
    
    stringstream ss(sentence); // Break sentence into words

    while (ss >> word) {      // Extract each word
        if (word.length() > longestWord.length()) {
            longestWord = word;
        }
    }

    cout << "Longest word: " << longestWord;

    return 0;
}
