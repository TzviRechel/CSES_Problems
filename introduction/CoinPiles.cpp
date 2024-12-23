#include <iostream>


using namespace std;

int main(){

    int n, a, b;
    string line;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        //getline(cin, line);
        cin >> a >> b;
        if((a+b)%3 != 0){cout << "NO" << endl; continue;}
        if(a*2<b){cout << "NO" << endl; continue;}
        if(b*2<a){cout << "NO" << endl; continue;}
        cout << "YES" << endl;
    }
    


}