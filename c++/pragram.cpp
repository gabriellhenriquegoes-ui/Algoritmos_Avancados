#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    string pala;
    cin >> pala;
    for (char &letra : pala) {
        letra = tolower(static_cast<unsigned char>(letra));
    }
    string alfa = "abcdefghijklmnopqrstuvwxyz";
    bool tem = true;
    for(char c: alfa){
        if(pala.find(c) == std::string::npos){
            tem = false;
            break;
        }
    }
    if(tem){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}