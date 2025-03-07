#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter Any Number: ";
    cin >> num;
    if (num % 2 != 0) {
        cout << "Number is odd";
    } else {
        cout << "Number is even";
    }
    return 0;
}