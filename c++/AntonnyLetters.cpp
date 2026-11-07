#include <bits/stdc++.h>
using namespace std;

int main(){
    string ent;
    getline(cin, ent);
    set<char> chars;
    for(int i = 1; i<ent.length()-1;i++){
        if(ent[i] != ' ' && ent[i] != ','){
            chars.insert(ent[i]);
        }
    }
    cout << chars.size();
    return 0;
}