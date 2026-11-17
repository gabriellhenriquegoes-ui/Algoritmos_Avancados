#include <bits/stdc++.h>
using namespace std;

int main(){
    string a, b, c;
    map <char, int> chars;
    map <char, int> chars2;
    cin >> a;
    cin >> b;
    cin >> c;
    for(char ch: a){
        chars[ch]++;
    }
    for(char ch: b){
        chars[ch]++;
    }
    for(char ch: c){
        chars2[ch]++;
    }
    if(chars == chars2) cout << "YES";
    else cout << "NO";
    return 0;
}