#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long totalPares = n*(n-1)/2;
    int  num;
    map<int, long long> frequencia;
    for(int i = 0; i < n; i++){
        cin >> num;
        frequencia[num]++;
    }
    for(auto const& par : frequencia){
        long long k = par.second;
        long long pares_iguais = k*(k-1)/2;
        totalPares -= pares_iguais;
    }
    cout << totalPares;
    return 0;
}