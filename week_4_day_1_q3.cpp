#include <iostream>
using namespace std;
int sumArray(int arr[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}
int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements separated by space: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int result = sumArray(arr, n);
    cout << "Sum of elements: " << result << endl;
    return 0;
}
