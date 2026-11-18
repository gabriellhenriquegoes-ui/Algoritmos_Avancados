#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;
    string s;
    while(t--){
        cin >> s;
        for(char& c : s){
            c = tolower(c);
        }
        if(s == "yes") cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}