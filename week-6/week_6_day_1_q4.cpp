#include <iostream>
using namespace std;
void someAlgorithm(int n)
{
    int i;
    int count = 0;
    for(i = n; i >= 1; i /= 2)
    {
        count++;
        cout << "Current i: " << i << endl;
    }
    cout << "\nTotal iterations: " << count << endl;
}
int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    someAlgorithm(n);
    return 0;
}
