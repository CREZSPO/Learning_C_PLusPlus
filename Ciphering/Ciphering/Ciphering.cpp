// ASCII 

    // cout << (int)'a' << endl;
    // cout << int('a') << endl;
    // cout << int('A') << endl;
    // cout << char(65) << endl;

#include <iostream>
using namespace std;

int main() {
    
    char c1, c2, c3, c4, c5;
    cout << "Enter 5 letters: ";
    cin >> c1 >> c2 >> c3 >> c4 >> c5;
    cout << "ASCII message: " << int(c1) << " " << int(c2) << " " << int(c3) << " " << int(c4) << " " << int(c5);

    int b1, b2, b3, b4, b5;
    cout << "Enter cipher word in ASCII: ";
    cin >> b1 >> b2 >> b3 >> b4 >> b5;
    cout << "ASCII message: " << char(b1) << " " << char(b2) << " " << char(b3) << " " << char(b4) << " " << char(b5);

    system("pause>0");

}
