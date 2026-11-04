#include <bits/stdc++.h>
using namespace std;

int main(){
    int p, qtds, num;
    cin >> p;
    std::vector<int> nums;
    cin >> qtds;
    for(int i = 0; i<qtds;i++){
        cin >> num;
        nums.push_back(num);
    }
    cin >> qtds;
    for(int i = 0; i<qtds;i++){
        cin >> num;
        nums.push_back(num);
    }
    bool tem = true;
    while(p > 0){
        if(find(nums.begin(), nums.end(),p) == nums.end()){
            tem = false;
        }
        p--;
    }
    if(tem){
        cout << "I become the guy.\n";
    }
    else{
        cout << "Oh, my keyboard!\n";
    }
    return 0;
}