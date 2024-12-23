#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>


using namespace std;
typedef vector<int> vi;
typedef vector<pair<int,int>> vpi;

int main(){
    
    int n;
    cin >> n;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    long long maxSub = arr[0];
    long long maxi = arr[0];
    for (int i = 1; i < n; i++)
    {
        maxi = max(maxi + arr[i], arr[i]);
        if(maxi > maxSub){maxSub = maxi;}
    }
    cout << maxSub << endl;
    
    return 0;
}