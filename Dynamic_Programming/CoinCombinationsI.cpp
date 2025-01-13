#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <set>


using namespace std;
typedef vector<int> vi;
typedef vector<pair<int,int>> vpi;

int main(){

    int mod = 1000000007;
    
    int c, sum;
    cin >> c >> sum;
    vi coins(c);
    for(int i = 0; i < c; i++){
        cin >> coins[i];
    }

    vi dp(sum+1, 0);
    dp[0] = 1;

    for (int i = 1; i <= sum; i++){
        for (int j = 0; j < c; j++)
        {
            if(i-coins[j] >=0){
                dp[i] = (dp[i] + (dp[i-coins[j]]))%mod;
            }
        }
        
    }

    cout << dp[sum] << endl;

    return 0;
    }