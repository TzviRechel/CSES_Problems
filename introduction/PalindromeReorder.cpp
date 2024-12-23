#include <iostream>
#include <string>


using namespace std;

int main(){

    string s;
    cin >> s;
    int letters[26] = {0};
    int length = s.length();

    for (int i = 0; i < length; i++)
    {
        char t = s[i];
        letters[t-'A']++;
    }

    //check if valid
    int noEven = 0;
    int isNoEven = -1;
    for (int i = 0; i < 26; i++)
    {
        if(letters[i]%2 == 1){
            if (noEven == 1)
            {
                cout << "NO SOLUTION" << endl;
                return 0;
            }
            else{noEven++; isNoEven = i;}   
        }
    }

    //build a palindrom
    string pal;
    for (int i = 0; i < 26; i++)
    {
        if(i != isNoEven){
            for (int j = 0; j < letters[i]/2; j++)
            {
                pal.push_back('A'+i);
            }
            
        }
    }
    //add the no even
    if(isNoEven!=-1){
    for (int i = 0; i < letters[isNoEven]; i++)
            {
                pal.push_back('A'+isNoEven);
            }
    }
    
    //add the reverse
     for (int i = 25; i >= 0; i--)
    {
        if(i != isNoEven){
            for (int j = 0; j < letters[i]/2; j++)
            {
                pal.push_back('A'+i);
            }
            
        }
    }
    cout << pal << endl;
    

    

    


}