#include <iostream>
using namespace std;

int main() {
    int baseSalary = 50000;
    const double bonusPercentage = 15;

    double bonusAmount = baseSalary * (bonusPercentage / 100);

    double totalSalary = baseSalary + bonusAmount;

    cout << "Total Salary: " << totalSalary << endl;

    return 0;
}
