#include <iostream>
#include <sstream>


using namespace std;


void Hanoy(int n, int from, int to, int with, ostringstream& move, int& count){
    if(n>=1){
        Hanoy(n-1, from, with, to, move, count);
        count++;
        move << from << " " << to << "\n";
        Hanoy(n-1, with, to, from, move, count);
    }
}


int main(){
    int n;
    cin >> n;
    ostringstream moves;
    int ans = 0;
    Hanoy(n, 1, 3, 2, moves, ans);
    cout << ans << endl;
    cout << moves.str();

}