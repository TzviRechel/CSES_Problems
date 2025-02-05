#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <set>


using namespace std;
typedef vector<int> vi;
typedef vector<pair<int,int>> vpi;

int main(){
    
    int n;;
    cin >> n;
    vi arr(n);
    multiset<int> s;
    int t;
    for(int i=0; i<n; i++){
        cin >> t;
        auto it = s.upper_bound(t);
            if(it != s.end()){
                s.erase(it);
            }
        s.insert(t);
    }
    cout << s.size() << endl;

return 0;
}