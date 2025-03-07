#include <iostream>
using namespace std;

int main(){
    int age;
    cout << "Enter your age: ";
    cin >> age;
    age > 18 ? cout << "Adult" << endl : age < 12 ? cout << "Child" << endl : cout << "Teenage" << endl;

    return 0;
}