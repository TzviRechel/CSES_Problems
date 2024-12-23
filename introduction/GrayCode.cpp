#include <iostream>
#include <vector>
#include <string>
#include <bitset>
using namespace std;

void generateGrayCode(int n) {
    int total = 1 << n; // Total 2^n numbers
    for (int i = 0; i < total; ++i) {
        int gray = i ^ (i >> 1); // Convert to Gray code
        // Print the Gray code as a binary string of length n
        cout << bitset<16>(gray).to_string().substr(16 - n) << endl;
    }
}

int main() {
    int n;
    cin >> n;
    generateGrayCode(n);
    return 0;
}
