#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
using namespace std;

class Chef{
public:
    int cook_time;
    int time=0;
        
    Chef(int t){
        cook_time = t;
    }

    bool operator< (const Chef& rhs) const{
        return time > rhs.time;
    }

};

int main(){

    int n,m,c,customer=0;
    priority_queue<Chef> time;
    scanf("%d %d",&n,&m);

    //input time for chef to cook
    for(int i=0;i<n;i++){
        scanf("%d",&c);
        Chef x(c);
        time.push(x);
    }

    //Run restaurant
    while(customer!=m){
        printf("%d\n",time.top().time);
        Chef x = time.top();
        x.time+=x.cook_time;
        time.pop();
        time.push(x);
        customer++;

    }

    return 0;
}