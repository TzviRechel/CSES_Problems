#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef vector<int> vi;
typedef vector<pair<int,int>> vpi;

int main(){

    int n, x;
    cin >> n >> x;
    vpi arr;

    for (int i = 1; i <= n; i++)
    {
        int t;
        cin >> t;
        arr.push_back({t, i});
    }

    sort(arr.begin(), arr.end());
    int left = 0;
    int right = n-1;
    while (left<right)
    {
        if((arr[left].first+arr[right].first) > x){right--; continue;}
        if((arr[left].first+arr[right].first) < x){left++; continue;}
        if((arr[left].first+arr[right].first) == x){
            cout << arr[left].second << " " << arr[right].second << endl;
            return 0;
            }
    }

    cout << "IMPOSSIBLE" << endl;
    

return 0;
}