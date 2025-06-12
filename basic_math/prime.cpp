#include <iostream>
#include <cmath>
using namespace std;

// Brute force Approach O(n)
bool is_prime(int n) {
    if (n <= 1) return false;

    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
        }
    }

    if (count == 2) {
        return true;
    } else {
        return false;
    }
}

// Optimized Approach O(sqrt(n))
bool is_prime_optimized(int n) {
    if (n <= 1) return false;

    int count = 0;

    // Check for divisors up to sqrt(n)
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            count++; // i is a divisor
            if (n / i != i) {
                count++; // n/i is another divisor
            }
        }
    }

    // Add 2 for 1 and n (always divisors)
    count += 2;

    if (count == 2) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (is_prime(n)) {
        cout << n << " is a prime number" << endl;
    } else {
        cout << n << " is not a prime number" << endl;
    }

    if (is_prime_optimized(n)) {
        cout << n << " is a prime number (optimized check)" << endl;
    } else {
        cout << n << " is not a prime number (optimized check)" << endl;
    }

    return 0;
}
