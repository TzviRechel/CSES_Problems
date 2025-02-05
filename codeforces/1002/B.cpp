#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

int solve(int n, vector<int>& a, int k){
 
    for (int i = 0; i <= n-k; ++i) {
        if(a[i+1]!=1){
            return 1;
        }
        if(i>=1 && i==n-k){
            return 2;
        }
    }
    int curr = 2;
    for(int i = n-k+1; i < n-2; ++i){
        if(a[i+2] != curr){
            return curr;
        }
        curr++;
        i++;
    }
    return curr;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        vector<int> a(n);;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        cout << solve(n, a, k) << endl;
    }
    
    return 0;
}