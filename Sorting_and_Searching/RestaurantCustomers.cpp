#include <iostream>
#include <vector>
#include <algorithm>



using namespace std;

int main(){

    int n;
    cin >> n;
    vector<pair<int, int>> times(n);
    for (int i = 0; i < n; i++)
    {
        int a,b;
        cin >> a >> b;
        times.push_back({a, 1});
        times.push_back({b, -1});
    }

    sort(times.begin(), times.end());

    int count = 0;
    int ans = 0;

    for(auto& t : times){
        count += t.second;
        ans = max(count, ans);

    }

    cout << ans << endl;
    

return 0;
}