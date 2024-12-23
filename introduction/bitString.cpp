#include <iostream>
using namespace std;

const int MOD = 1e9 + 7;

// Function to compute (base^exp) % mod using modular exponentiation
long long mod_exp(long long base, long long exp, int mod) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;  // If exp is odd
        }
        base = (base * base) % mod;         // Square the base
        exp /= 2;
    }
    return result;
}

int main() {
    int n;
    cin >> n;

    // Calculate 2^n % MOD
    cout << mod_exp(2, n, MOD) << endl;

    return 0;
}