#include <iostream>
#include <vector>
#include <climits>


using namespace std;


void subSet(int n, int i, vector<int>& arr){
    if(i > n){
        cout << "{";
        for (size_t j = 0; j < arr.size(); j++)
        {
            cout << arr[j];
            if (j < arr.size() - 1) cout << ",";
        }
        cout << "}" << endl;
        return;
    }

    subSet(n, i+1, arr);
    arr.push_back(i);
    subSet(n, i+1, arr);
    arr.pop_back();    
}

int main(){

    int n;
    cin >> n;
    vector<int> arr;
    subSet(n, 1, arr); 
}