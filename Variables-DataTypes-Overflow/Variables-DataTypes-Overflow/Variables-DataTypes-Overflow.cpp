#include <iostream>
using namespace std;

int main(){
    
    float AnnualSalary;
    cout << "Please enter your annual salary\n";
    cin >> AnnualSalary;
    float MonthlySalary = AnnualSalary / 12;
    cout << "Your monthly salary is " << MonthlySalary << endl;
    cout << "In ten years you will earn " << AnnualSalary * 10 << endl;

    char character = 'a';

    //Examples of data types 
    int yearOfBirth = 1995;
    char gender = 'f';
    bool isOlderThan18 = true;
    float averageGrade = 4.5;
    double balance = 1582957352368365;

    //Size of variables 
    cout << "Size of int is " << sizeof(int) << " bytes\n";
    // -1, -2, -3, ..., -2147483648
    cout << "Int min value is " << INT_MIN << endl;
    // 0, +1, +2, +3, ..., -2147483647
    cout << "Int max value is " << INT_MAX << endl;

    cout << "Size of unsigned int is " << sizeof(unsigned int) << " bytes\n";

    cout << "UInt max value is " << UINT_MAX << endl;

    system("pause>0");

}