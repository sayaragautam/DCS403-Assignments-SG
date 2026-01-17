#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int randomNumber = rand() % 26;
    char randomLetter = 'A' + randomNumber;
    cout << "Random Uppercase Letter: " << randomLetter << endl;

    return 0;
}