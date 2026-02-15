#include <iostream>
using namespace std;
void someAlgorithm(int n)
{
    int i, j;
    int count = 0;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            count++;
        }
    }
    cout << "Total inner operations: " << count << endl;
}
int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    someAlgorithm(n);
    return 0;
}
