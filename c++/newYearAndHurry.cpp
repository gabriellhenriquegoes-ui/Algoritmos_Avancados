#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, k , prob = 0, time = 240;
    cin >> n >> k;
    time -= k;
    for(int i = 1; i*5 <= time and i<=n; i++){
        prob ++;
        time -= i*5;
    }
    cout << prob;
    return 0;
}