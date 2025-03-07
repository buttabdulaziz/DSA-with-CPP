#include <iostream>
using namespace std;

int main(){

    int num;
    int sum = 0;
    int i = 1;
    cout << "Enter Your Number to Print Sum: ";
    cin >> num;

    while (i < num) {
        sum += i;
        i++;
    }
    cout << sum << endl;
    return 0;
}