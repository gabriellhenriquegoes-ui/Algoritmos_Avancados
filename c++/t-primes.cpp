#include <bits/stdc++.h>
using namespace std;

bool eh_primo(long long z){
    if(z < 2) return false;
    for(int i = 2; i*i <= z; i++){
        if(z%i==0) return false;
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n, x;
    cin >> n;
    while(n--){
        cin >> x;
        long long raiz = sqrt(x);
        if(raiz * raiz == x && eh_primo(raiz))cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}