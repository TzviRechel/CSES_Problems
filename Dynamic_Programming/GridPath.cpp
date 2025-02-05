#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <set>


using namespace std;
typedef vector<int> vi;
typedef vector<pair<int,int>> vpi;

int main(){
    
    int n;
    cin >> n;
    vector<vector<int>> grid(n, vector<int>(n, 0));
    grid[0][0] = 1;
    char c;
    const int MOD = 1e9 + 7;
   
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> c;
            if(c == '*'){
                grid[i][j] = 0;
                continue;
            }

            int up = i>0 ? grid[i-1][j] : 0;
            int left = j>0 ? grid[i][j-1] : 0;

            grid[i][j] = (grid[i][j] + up + left) % MOD;
        }
    }

    cout << grid[n-1][n-1] << endl;
    


    return 0;
}