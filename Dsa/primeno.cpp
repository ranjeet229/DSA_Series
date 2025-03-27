#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n <= 1) {
        cout << n << " is not a prime number" << endl;
    }
    else if (n == 2) {
        cout << n << " is a prime number" << endl;
    }
    else {
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                cout << "is not a prime number" << endl;
                return 0;
            }
        }
        cout << "is a prime number" << endl;
    }

    return 0;
}
