#include <iostream>
using namespace std;

int main(){

    int h,m,x;
    cin >> h >> m >> x;

    int h_plus=0,m_plus=0;
    m_plus += x%60;
    m += m_plus;
    if(m>=60){
        h_plus+=m/60;
        m%=60;
    }
    h_plus += x/60;
    h = (h+h_plus)%24;

    if(h/10==0){
        cout<<'0';
    }
    cout << h << " ";
    if(m/10==0){
        cout<<'0';
    }
    cout << m;

    return 0;
}