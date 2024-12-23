#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main(){

    int n, max;
    cin >> n >> max;
    vector<int> weights(n);
    for (int i = 0; i < n; i++)
    {
        cin >> weights[i];
    }

    sort(weights.begin(), weights.end());
    int start = 0;
    int end = n-1;
    int count = 0;
    while (start<end)
    {
        if(weights[end] + weights[start] <= max){end--;start++;}
        else{end--;}
        count++;
    }
    if(end == start){count++;}
    cout << count << endl;

return 0;
}