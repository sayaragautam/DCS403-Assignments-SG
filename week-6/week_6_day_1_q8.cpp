#include <iostream>
using namespace std;
void someAlgorithm(int n)
{
    int countTriple = 0;
    int countConstant = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            for(int k = 0; k < n; k++)
            {
                countTriple++;
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 10; j >= 1; j--)
        {
            countConstant++;
        }
    }
    cout << "Triple nested operations: " << countTriple << endl;
    cout << "Constant inner loop operations: " << countConstant << endl;
    cout << "Total operations: " << countTriple + countConstant << endl;
}
int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    someAlgorithm(n);
    return 0;
}
