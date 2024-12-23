#include <iostream>


using namespace std;

int main(){

    long n;
    cin >> n;
    long count = 0;
     long power_of_5 = 5;
    
    while (n >= power_of_5) {
        count += n / power_of_5;
        power_of_5 *= 5;
    }
   
    
    cout << count << endl;
    
}