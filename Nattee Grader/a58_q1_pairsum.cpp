#include <iostream>
#include <string>
#include <set>
using namespace std;

int main(){

    int n,m,c;
    cin >> n >> m;
    int a[n],b[m];

    for(int i=0;i<n;i++){
        cin >> c;
        a[i] = c;
    }
    set<int> a_set(a,a+n);

    for(int i=0;i<m;i++){
        cin >> c;
        b[i] = c;
    }

    for(int i=0; i<m; i++){
        bool check = false;
        for(int j=0; j<n; j++){
            if(a_set.count(b[i]-a[j]) > 0){
                cout << "YES" << endl;
                check = true;
                break;
            }
        }
        if(!check) cout << "NO" << endl;
    }

    return 0;
}