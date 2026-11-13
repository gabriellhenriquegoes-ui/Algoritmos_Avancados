#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, h, a, resp = 0;
    cin >> n;
    vector<long long> home;
    vector<long long> guest;
    while(n--){
        cin >> h >> a;
        home.push_back(h);
        guest.push_back(a);
    }
    for(int i = 0; i<home.size();i++){
        resp += count(guest.begin(), guest.end(), home[i]);
    }
    cout << resp;
    return 0;
}