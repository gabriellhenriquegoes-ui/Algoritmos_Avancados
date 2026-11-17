#include <bits/stdc++.h>
using namespace std;

int main(){
    long long s, n;
    cin >> s >> n;
    vector<pair<long long, long long>> forcas(n);
    for(int i = 0; i < n; i++){
        cin >> forcas[i].first >> forcas[i].second;
    }
    sort(forcas.begin(), forcas.end());
    for(int i = 0; i<n; i++){
        if(s > forcas[i].first) s += forcas[i].second;
        else{
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}