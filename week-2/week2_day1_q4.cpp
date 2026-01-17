#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;

    switch (marks / 10) {  
        case 10:           
        case 9:
        case 8:
            cout << "Grade A";
            break;
        case 7:
        case 6:
            cout << "Grade B";
            break;
        case 5:
        case 4:
            cout << "Grade C";
            break;
        default:
            if (marks >= 0) 
                cout << "Grade F";
            else
                cout << "Invalid marks";
    }

    return 0;
}
