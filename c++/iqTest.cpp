#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a, b, par = 0, impar = 0;
    cin >> a;
    vector<long long> nums;
    while(a--){
        cin >> b;
        if(b%2 == 0) par++;
        else impar++;
        nums.push_back(b);
    }
    for(int i = 0; i<nums.size();i++){
        if(par>impar && nums[i]%2 != 0){
            cout << i+1 << endl; 
            break;
        }
        if(par<impar && nums[i]%2 == 0){
            cout << i+1 << endl; 
            break;
        }
    }
    return 0;
}