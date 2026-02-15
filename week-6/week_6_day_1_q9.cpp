#include <iostream>
using namespace std;
void someAlgorithm(int n)
{
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            count++;
        }
    }
    cout << "Total arithmetic operations: " << count << endl;
}

int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    someAlgorithm(n);
    return 0;
}
