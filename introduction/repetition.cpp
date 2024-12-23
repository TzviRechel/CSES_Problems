#include <iostream>
#include <string>

using namespace std;

int main(){

    string s;
    cin >> s;
    int ans = 0;
    char a = s[0];
    int i = 0;
    while(i < s.length()){
        int temp = 1;
        while(i+1 < s.length() & a == s[i+1]){
            temp++;
            i++;
        }
        a = s[i+1];
        if(temp > ans){ans = temp;}
        i++;

    }
    

cout << ans;

return 0;


}