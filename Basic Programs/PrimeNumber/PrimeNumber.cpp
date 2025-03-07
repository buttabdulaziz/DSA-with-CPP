#include <iostream>
using namespace std;

int main() {
    int n;
    bool isPrime = true;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 2; i <= (n / 2); i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime) {
        cout << "Prime";
    } else {
        cout << "Not Prime";
    }

    return 0;
}
