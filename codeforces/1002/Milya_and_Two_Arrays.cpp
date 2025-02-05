#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

bool canObtainThreeDistinctSums(int n, vector<int>& a, vector<int>& b) {
 
    // Calculate the sums
    unordered_set<int> sums;
    for (int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            sums.insert(a[i] + b[j]);
            if(sums.size() >= 3) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }
        
        if (canObtainThreeDistinctSums(n, a, b)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}