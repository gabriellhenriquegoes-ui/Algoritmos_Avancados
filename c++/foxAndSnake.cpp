#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, m, v, p;
    cin >> n >> m;
    v = 0;
    p = 0;
    while(n>p){
        if(p%2!=0){
            if(v%2==0){
                cout << string(m-1, '.')+"#\n";
            }else{
                cout << '#'+string(m-1, '.') << "\n";
            }
            v++;
        }else{
            cout << string(m, '#') << "\n";
        }
        p++;
    }
    return 0;
}