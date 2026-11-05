#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
    int x;
    cin >> x;
    map<string, int> nomes;
    
    for(int i = 0; i<x; i++){
        string nome;
        cin >> nome;
        if(nomes[nome]>0){
            cout << nome << nomes[nome] << "\n" ;
            nomes[nome]++;
        }else{
            nomes[nome] = 1;
            cout << "OK\n";
        }
    }
 
    return 0;
}