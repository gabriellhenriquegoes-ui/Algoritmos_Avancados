#include <bits/stdc++.h>
using namespace std;

int main(){
    string pala;
    cin >> pala;
    for(char &c:pala){
        c = tolower(c);
    }
    cout << pala;
    return 0;
}