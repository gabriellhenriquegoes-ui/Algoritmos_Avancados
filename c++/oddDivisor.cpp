#include <bits/stdc++.h>
using namespace std;

bool odd(long long num){
    for(int i = 2; i <= num; i++){
        if(num%i == 0 and i%2 !=0)return true;
    }
    return false;
}

int main(){
    long long t, n;
    cin >> t;
    while(t--){
        cin >> n;
        if((n & (n-1)) == 0) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}