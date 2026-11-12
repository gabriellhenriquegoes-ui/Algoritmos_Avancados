#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a, b, c, x;
    cin >> x;
    while(x--){
        cin >> a >> b >> c;
        if((a+b)==c || (a+c)==b || (b+c)==a){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}