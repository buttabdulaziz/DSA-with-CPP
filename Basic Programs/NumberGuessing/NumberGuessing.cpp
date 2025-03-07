#include <iostream>
using namespace std;

int main(){

    while (true) {
        int n;
        cout << "Enter any Guess from 1-10: ";
        cin >> n;
        if (n == 3) {
            break;
        } else {
            cout << "You Guessed Wrong. Try again" << endl;
        }
    }
    return 0;
}