#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
   
    long n;
    cin >> n;

    while (n > 1) {
        cout << n << " ";
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = n * 3 + 1;
        }
    }
    cout << n << endl; // Print the final 1

    return 0;
}