#include <bits/stdc++.h>
using namespace std;

int main(){
    int v;
    cin >> v;
    set<string> pala;
    string pal;
    for(int i = 0; i<v; i++){
        cin >> pal;
        pala.insert(pal);
    }
    cout << pala.size();
    return 0;
}