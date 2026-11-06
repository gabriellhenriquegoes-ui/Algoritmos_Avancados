#include <bits/stdc++.h>
using namespace std;

int main(){
    long long num;
    cin >> num;
    long long pasos = 0;
    while(num>=100){
        num -= 100;
        pasos++;
    }while(num>=20){
        num -= 20;
        pasos++;
    }while(num>=10){
        num -= 10;
        pasos++;
    }while(num>=5){
        num -= 5;
        pasos++;
    }while(num>=1){
        num -= 1;
        pasos++;
    }
    cout << pasos;
    return 0;
}