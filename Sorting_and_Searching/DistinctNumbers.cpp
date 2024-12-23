#include <iostream>
#include <set>


using namespace std;

int main(){
 int n;
 cin >> n;
 int x;
set<int> numbers;
 for (int i = 0; i < n; i++)
 {
    cin >> x;
    numbers.insert(x);
 }

 cout << numbers.size() << endl;
}