#include <iostream>
using namespace std;
void someAlgorithm(int n)
{
    int countLog = 0;
    int countLinear = 0;
    for(int i = 0; i < n; i++)
    {
        for(int k = n; k >= 1; k /= 2)
        {
            countLog++;
        }
        for(int j = 0; j < n; j++)
        {
            countLinear++;
        }
    }
    cout << "Total logarithmic operations: " << countLog << endl;
    cout << "Total linear operations: " << countLinear << endl;
    cout << "Total operations combined: " << countLog + countLinear << endl;
}
int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    someAlgorithm(n);
    return 0;
}
