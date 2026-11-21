#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    long long toasts = k * l /nl;
    long long limes = c * d;
    long long salt = p / np;
    cout << min({toasts, limes, salt})/n << endl;
    return 0;
}