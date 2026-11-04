#include <bits/stdc++.h>
using namespace std;

int main(){
    string x;
    cin >> x;
    vector<char> letras;
    for(char letra : x){
        if(find(letras.begin(), letras.end(), letra) == letras.end()){
            letras.push_back(letra);
        }
    }
    if(letras.size()%2==0){
        cout << "CHAT WITH HER!";
    }else{
        cout << "IGNORE HIM!";
    }
    return 0;
}