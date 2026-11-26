#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t, r;
    cin >> t;
    while(t--){
        cin >> r;
        if(r <= 1399)cout << "Division 4" << endl;
        else if(r>= 1400 and r<=1599) cout << "Division 3" << endl;
        else if(r>=1600 and r<=1899) cout << "Division 2" << endl;
        else cout << "Division 1" << endl;
    }
    return 0;
}