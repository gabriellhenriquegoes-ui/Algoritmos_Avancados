#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a, b, c;
    cin >> a >> b >> c;
    long long maior = 0;
    if(a+b*c>maior){
        maior = a+b*c;
    }
    if(a*(b+c)>maior){
        maior = a*(b+c);
    }
    if(a*b*c>maior){
        maior = a*b*c;
    }
    if((a+b)*c>maior){
        maior = (a+b)*c;
    }
    if(a+b+c>maior){
        maior = a+b+c;
    }
    cout << maior << "\n";
    return 0;
}