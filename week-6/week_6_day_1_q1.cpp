#include <iostream>
using namespace std;
void someAlgorithm(int n)
{
    int i;
    // First loop
    for(i = n - 2; i >= 1; i--)
    {
        cout << "First Loop Iteration\n";
    }
    // Second loop
    for(i = 0; i < n; i++)
    {
        cout << "Second Loop Iteration\n";
    }
    // Third loop
    for(i = 0; i < 6; i++)
    {
        cout << "Third Loop Iteration\n";
    }
}
int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    someAlgorithm(n);
    return 0;
}
