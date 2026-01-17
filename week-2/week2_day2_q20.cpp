#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "aaabbccccd";
    string compressed = "";

    int n = str.length();
    for (int i = 0; i < n; i++) {
        int count = 1;
        while (i + 1 < n && str[i] == str[i + 1]) {
            count++;
            i++;
        }
        compressed += str[i] + to_string(count); // Append character and its count
    }

    cout << compressed;

    return 0;
}
