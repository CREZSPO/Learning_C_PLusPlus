
#include <iostream>
using namespace std;

int main(){

    // User enters the side lengths of a triangle (a,b,c)
    // Program should write out whether that triangle is equilateral, isosceles or scalene 

    float a, b, c;
    cout << "a, b, c:\n";
    cin >> a >> b >> c; 

    if (a == b && b == c) {
        cout << "Equilateral Triangle";
    }
    else {
    
        if (a != b && a != c && b != c ){

            cout << "Scalene Triangle"; 

        }
        else {

            cout << "Isosceles Triangle";

        }

    }


    system("pause>0");


}
