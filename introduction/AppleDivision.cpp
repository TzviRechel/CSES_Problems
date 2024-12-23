#include <iostream>
#include <vector>
#include <climits>


using namespace std;


void subSet(vector<long>& arr, size_t p, long long& min, long sum, long& totalSum){
    if(p == arr.size()){
        long dif = abs(totalSum - sum*2);
        if(dif < min){
            min = dif;
        }
        return;
    }

    subSet(arr, p+1, min, sum, totalSum);
    subSet(arr, p+1, min, sum+arr[p], totalSum);    
}

int main(){

    int n;
    cin >> n;
    vector<long> arr(n);
    long totalSum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        totalSum+=arr[i];
    }

    long long min = LONG_MAX;
    subSet(arr, 0, min, 0, totalSum); 
    cout << min << endl;
}