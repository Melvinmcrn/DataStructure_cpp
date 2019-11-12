#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    int n,m,c;
    vector<int> v1,v2,v3;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> c;
        v1.push_back(c);
    }
    for(int i=0; i<m; i++){
        cin >> c;
        v2.push_back(c);
    }
    for(auto &x : v1){
        if(find(v2.begin(),v2.end(),x)!=v2.end() && find(v3.begin(),v3.end(),x)==v3.end()){
            v3.push_back(x);
        }
    }
    sort(v3.begin(),v3.end());
    for(auto &x : v3){
        cout << x << " ";
    }cout << endl;
}