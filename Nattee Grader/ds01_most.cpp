#include <iostream>
#include <map>
using namespace std;

int main(){

    int n,most=0;
    string most_text="";
    map<string,int> data;
    cin >> n;
    for(int i=0; i<n; i++){
        string word;
        cin >> word;
        if(data.find(word)==data.end()) data[word] = 1;
        else data[word] ++;

        if(data[word] > most) most = data[word];
    }

    for(const auto &c : data){
        if(c.second == most) most_text = c.first;
    }

    cout << most_text << " " << most;

    return 0;
}