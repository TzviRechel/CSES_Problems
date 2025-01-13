#include <iostream>
#include <vector>
using namespace std;

// Define the modulo value for large numbers
const int MOD = 1000000007;

int main() {
    int n;
    cin >> n; // Read the input value for n

   int dp[n+1];

   dp[0] = 1;

   for(int i = 1; i <= n; i++){
       dp[i] = 0;
       for(int j = 1; j <= 6; j++){
           if(i-j >= 0){
               dp[i] = (dp[i] + dp[i-j]) % MOD;
           }
       }
   }

    // Output the result for n
    cout << dp[n] << endl;

    return 0;
}
