#include<iostream>
using namespace std;

int main(){
    int age;
    cout << "Enter your Age: ";
    cin >> age;
    if (age > 18) {
        cout << "You are an Adult" << endl;
    } else if (age >= 12 && age <= 18) {
        cout << "You are in Teenage";
    } else {
        cout << "You are a Child";
    }
    return 0;
}