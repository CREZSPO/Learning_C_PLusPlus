
#include <iostream>
using namespace std;

int main(){

    // User enter integer number 
    // Program write out if that number is even or odd

    cout << 5 % 2 << endl; // % stands for module 
    
    int number;
    cout << "Please enter a whole number" << endl; 
    cin >> number;

    if (number % 2 == 0) {
        cout << "You have entered an even number." << endl;
    }
    else {
        cout << "You have entered an odd number." << endl;
    }

    cout << "Thanks. Bye.";

    system("pause>0");
}