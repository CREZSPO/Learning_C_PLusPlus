
#include <iostream>
using namespace std;

int main()
{
	// Just some simple operations
	// +,-,*,/,%
	cout << 5 + 2 << endl;
	cout << 5 / 2 << endl; //2 -> for decimals use float or double
	cout << 5 % 2 << endl; //1

	// Unitary operators ++ , --, 
	int counter = 7;
	counter++;							// Post - Increment 
	cout << counter << endl;
	counter--;
	cout << counter << endl;

	int counter2 = 7;
	cout << ++counter2 << endl;			// Pre - Increment 
	cout << counter2-- << endl;
	cout << counter2 << endl;

	system("cls"); // Clears the console 

	// Relational Operators 
	// <,>,<=,>=,==,!=

	int a = 5, b = 5; // The comma is also a binary operator / separator 
	cout << (a > b);
	cout << (a <= b);
	cout << (a == b);
	cout << (a != b);

	system("cls");

	// Logical Operators 
	// && , || , !

	cout << (a == 5 && b == 5);
	cout << (a == 5 || b == 5);
	cout << !(a == 5 || b == 5);
	cout << (a == 5 || b == 5+8); 
	// Arithmethic operators have the greatest priority then Relational and then Logical 
	system("cls");

	// Assignments operators 
	// =,+=,-=,*=,/=,%=

	int x = 5;
	x += 7; 
	//x = x + 7; // This two expressions are the same  
	cout << x << endl;


	system("pause>0"); 
}

