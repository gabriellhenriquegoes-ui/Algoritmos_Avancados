#include <bits/stdc++.h>
using namespace std;

int main(){
    int qtds,num;
    cin >> qtds;
    vector<int> nums;
    for(int i = 0; i<qtds; i++){
        cin >> num;
        nums.push_back(num);
    }
    int idx_maior = 0;
    int maior = nums[0];
    for(int i = 1; i<qtds; i++){
        if(nums[i]>maior){
            maior = nums[i];
            idx_maior = i;
        }
    }
    int idx_menor = 0;
    int menor = nums[0];
    for(int i = 1; i<qtds; i++){
        if(nums[i]<=menor){
            menor = nums[i];
            idx_menor = i;
        }
    }
    if(idx_maior>idx_menor){
        cout << idx_maior+qtds-idx_menor-2 << endl;
    }else{
        cout << idx_maior+qtds-idx_menor-1 << endl;
    }
    return 0;
}