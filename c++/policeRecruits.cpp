#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, x, recruits = 0, untreated = 0;
    cin >> n;
    while(n--){
        cin >> x;
        if(x >= 1) recruits += x;
        else if(x < 0 && recruits > 0) recruits--;
        else untreated++;
    }
    cout << untreated << endl;
    return 0;
}