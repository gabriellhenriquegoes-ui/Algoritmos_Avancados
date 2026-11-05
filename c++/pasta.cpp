#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, num;
    cin >> n >> m;
    vector<int> pasta;
    vector<int> noodles;

    for(int i = 0; i<n; i++){
        cin >> num;
        pasta.push_back(num);
    }
    for(int i = 0; i<m; i++){
        cin >> num;
        noodles.push_back(num);
    }
    for(int i = 0;i<noodles.size(); i++){
        auto result = find(pasta.begin(), pasta.end(), noodles[i]);
        if(result == pasta.end()){
            cout << "No";
            return 0;
        }else{
            pasta.erase(result);
        }
    }
    cout << "Yes";
    return 0;
}