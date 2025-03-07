#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter Number: ";
    cin >> num;
    if (num % 3 == 0 || num % 5 == 0) {
        cout << num;
    }

    return 0;
}