#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t, i;
    cin >> t;
    string ini = "I hate ";
    i = 1;
    while(t>i){
        i++;
        if(i%2==0){ 
            ini += "that I love ";
        }else{
            ini += "that I hate ";
        }
    }

    ini += "it";
    cout << ini;
    return 0;
}