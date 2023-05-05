
#include <iostream>
using namespace std;

int main(){

    int hostUserNum, guestUserNum;
    cout << "Host: ";
    cin >> hostUserNum;
    system("cls");
    cout << "Guest: ";
    cin >> guestUserNum;
    
    /* if (hostUserNum = guestUserNum) {
        cout << "Correct!";
    }
    else {
        cout << "Failed ! D:";
    } 
    */

    // Shorter form of if / else    
    (hostUserNum == guestUserNum)? cout << "Correct!": cout << "Failed ! D:";

    system("pause>0");
}
