#include <iostream>
#include <limits>

using namespace std;

int main() {
    cout << "Enter a nonnegative integer: ";

    long long n;
    if (!(cin >> n)) {
        cerr << "Invalid input. Please enter an integer.\n";
        return 1;
    }

    if (n < 0) {
        cerr << "Negative integer entered. Factorial is undefined for negative numbers.\n";
        return 1;
    }

    if (n > 20) {
        cerr << "Warning: result will overflow 64-bit integer. Computing using 64-bit may produce incorrect value." << endl;
    }

    unsigned long long result = 1ULL;
    for (long long i = 2; i <= n; ++i) {
        result *= static_cast<unsigned long long>(i);
    }

    cout << n << "! = " << result << '\n';
    return 0;
}
