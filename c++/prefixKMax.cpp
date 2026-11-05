#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k, num;
    cin >> n >> k;
    priority_queue<int, vector<int>, greater<int>> min_heap;
    for(int i = 0; i<n; i++){
        cin >> num;
        if(i<k){
            min_heap.push(num);
        }else if(num > min_heap.top()){
            min_heap.pop();
            min_heap.push(num);
        }
        if(i>=k-1){
            cout << min_heap.top() << "\n";
        }
    }
    return 0;
}