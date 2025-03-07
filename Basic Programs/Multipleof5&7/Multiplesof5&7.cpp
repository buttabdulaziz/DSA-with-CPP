#include <iostream>
using namespace std;

int main(){

    while (true) {
        int n;
        cout << "Enter multiple of 5: ";
        cin >> n;
        if (n % 5 == 0 && n % 7 == 0) {
            cout << "This is a Multiple of 5 & 7";
            break;
        } else {
            cout << "Wrong! Try again" << endl;
        }
    }
    
    return 0;
}