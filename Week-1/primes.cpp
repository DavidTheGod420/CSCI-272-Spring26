#include <iostream>
#include <cmath>

using namespace std;


bool Prime(long long n) {
    if (n <= 1) return false;
    if (n <= 3) return true; 
    if (n % 2 == 0) return false;
    if (n % 3 == 0) return false;

    
    long long limit = static_cast<long long>(sqrt((long double)n));
    for (long long i = 5; i <= limit; i += 6) {
        if (n % i == 0) return false;
        if (n % (i + 2) == 0) return false;
    }
    return true;
}

int main() {
    long long tests[] = { -5, 0, 1, 2, 3, 4, 5, 17, 18, 19, 20, 7919, 1000000007 };
    for (long long t : tests) {
        cout << t << (Prime(t) ? " is prime" : " is not prime") << '\n';
    }

    
    cout << "Enter an integer to test for primality: ";
    long long n;
    if (cin >> n) {
        if (Prime(n)) cout << n << " is prime\n";
        else cout << n << " is not prime\n";
    }
    return 0;
}
