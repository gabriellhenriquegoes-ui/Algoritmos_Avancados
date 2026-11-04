#include <bits/stdc++.h>
using namespace std;

int main(){
    string ent;
    cin >> ent;
    string base = "HQ9+";
    bool contem = false;
    for(int i = 0; i<base.length(); i++){
        if(ent.find(base[i]) != string::npos){
            contem = true;
        }
    }
    if(contem){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }
    return 0;
}