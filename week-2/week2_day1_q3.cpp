#include <iostream>
using namespace std;

int main() {
    int marks;

    cout << "Enter your marks: ";
    cin >> marks;

    if (marks >= 80 && marks <= 100) {
        cout << "Grade A";
    }
    else if (marks >= 60 && marks <= 79) {
        cout << "Grade B";
    }
    else if (marks >= 40 && marks <= 59) {
        cout << "Grade C";
    }
    else if (marks < 40 && marks >= 0) {
        cout << "Grade F";
    }
    else {
        cout << "Invalid marks"; 
    }

    return 0;
}
