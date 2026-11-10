#include <bits/stdc++.h>
using namespace std;

int main(){
    long long c, faces;
    faces = 0;
    cin >> c;
    while(c--){
        string poli;
        cin >> poli;
        if(poli == "Tetrahedron"){
            faces += 4;
        }else if(poli == "Cube"){
            faces += 6;
        }else if(poli == "Octahedron"){
            faces += 8;
        }else if(poli == "Dodecahedron"){
            faces += 12;
        }else{
            faces += 20;
        }
    }
    cout << faces << "\n";
    return 0;
}