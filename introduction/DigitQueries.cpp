#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

long long find_digit(long long k) {
    long long length = 1, count = 9, start = 1;

    // Determine the range containing the k-th digit
    while (k > length * count) {
        k -= length * count;
        length++;
        count *= 10;
        start *= 10;
    }

    // Find the exact number and digit
    long long number = start + (k - 1) / length;
    string num_str = to_string(number);
    return num_str[(k - 1) % length] - '0';
}

int main() {
    int q;
    cin >> q;
    vector<long long> queries(q);

    for (int i = 0; i < q; i++) {
        cin >> queries[i];
    }

    for (long long k : queries) {
        cout << find_digit(k) << endl;
    }

    return 0;
}
