#include <iostream>
using namespace std;

int main() {
    int n;

    // Ask for the number of terms
    cout << "Enter the number of terms: ";
    cin >> n;

    long long int a = 0, b = 1, nextTerm;

    cout << "Fibonacci Series: ";

    // Loop to generate Fibonacci numbers
    for (int i = 1; i <= n; ++i) {
        if (i == 1) {
            cout << a << " ";
            continue;
        }
        if (i == 2) {
            cout << b << " ";
            continue;
        }
        nextTerm = a + b;
        a = b;
        b = nextTerm;
        cout << nextTerm << " ";
    }

    cout << endl;
    return 0;
}
