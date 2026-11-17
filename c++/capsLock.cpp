#include <bits/stdc++.h>
using namespace std;

int main(){
    string a;
    long long b = 0;
    cin >> a;
    for(char c: a){
        if(isupper(c)) b++;
    }
    if(b == a.length()){
        for(char& c: a){
            c = tolower(c);
        }
    }
    else if(b == a.length()-1 && islower(a[0])){
        a[0] = toupper(a[0]);
        for(int i = 1; i<a.length();i++){
            a[i] = tolower(a[i]);
        }
    }
    cout << a << endl;
    return 0;
}