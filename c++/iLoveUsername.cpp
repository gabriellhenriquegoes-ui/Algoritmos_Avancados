#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, x, maior, menor, amazing = 0;
    cin >> n;
    cin >> x;
    maior = x;
    menor = x;
    n--;
    while(n--){
        cin >> x;
        if(x > maior){
            maior = x;
            amazing++;
        } 
        else if(x < menor){
            menor = x;
            amazing++;
        }
    }
    cout << amazing << endl;
    return 0;
}