#include <iostream>
using namespace std;

double calculateSalary(double stipend) {
    return stipend;
}

double calculateSalary(double baseSalary, double bonuses) {
    return baseSalary + bonuses;
}

double calculateSalary(double baseSalary, double bonuses, double performanceIncentives) {
    return baseSalary + bonuses + performanceIncentives;
}

int main() {

    double internStipend;
    cin>>internStipend;
    cout << "Intern Salary: " << calculateSalary(internStipend) << endl;

   
    double EBaseSalary;
    cin>>EBaseSalary;
    double EBonuses ;
    cin>> EBonuses;
    cout << "Regular Employee Salary: " << calculateSalary(EBaseSalary, EBonuses) << endl;

  
    double MBaseSalary;
    cin>>MBaseSalary;
    double MBonuses;
    cin>>MBonuses;
    double PerformanceIncentives;
    cin>>PerformanceIncentives;
    cout << "Manager Salary: " << calculateSalary(MBaseSalary,MBonuses,PerformanceIncentives) << endl;

    return 0;
}