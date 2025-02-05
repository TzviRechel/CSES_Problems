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
    vi arr(n);
    vector<bool> vb(n+1, false);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int rounds = 0;
    for (int i = 0; i < n; i++)
    {
        int curr = arr[i];
        if(vb[curr-1] == false){
            rounds++;
            vb[curr] = true;
        }
        else{
            vb[curr] = true;
        }
    }
    cout << rounds << endl;
    
return 0;
}