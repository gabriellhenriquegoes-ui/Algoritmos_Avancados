#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t, n;
    cin  >> t;
    while(t--){
        cin >> n;
        if(n < 3){
            cout << 0 << '\n';
        }else{
            cout << (n-1)/2 << '\n';
        }
    }
    return 0;
}