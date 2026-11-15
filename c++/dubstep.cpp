#include <bits/stdc++.h>
using namespace std;

int main(){
    string a, pal = "";
    cin >> a;
    vector<string> nums;
    for(int i = 0; i< a.length(); i++){
        if(i + 2 < (int)a.length() && a[i] == 'W' && a[i+1] == 'U' && a[i+2] == 'B'){
            if (pal != "") nums.push_back(pal);
            pal = "";
            i += 2;
        }else{
            pal += a[i];
        }
    }
    if (!pal.empty()) {
        nums.push_back(pal);
    }
    for (int i = 0; i < (int)nums.size(); i++) {
        if (i != 0) cout << " ";
        cout << nums[i];
    }
    cout << endl;
    return 0;
}