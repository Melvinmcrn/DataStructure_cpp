#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    ifstream myfile;
    string file_name;
    cin >> file_name;
    myfile.open(file_name);

    string fruit, name;
    map<string, vector<string>> data;
    vector<string> sorted_fruit;
    vector<string>::iterator it;

    while(myfile >> fruit >> name){
        if(find(sorted_fruit.begin(),sorted_fruit.end(),fruit)==sorted_fruit.end()) sorted_fruit.push_back(fruit);
        data[fruit].push_back(name);
    }myfile.close();

    cout << "[";

    int most=0;
    string most_name = "";
    vector<string>::iterator its;
    for(it = sorted_fruit.begin(); it!=sorted_fruit.end(); it++){
        if(data[*it].size() > most){
            most = data[*it].size();
            most_name = *it;
        }

        cout << "['" << *it << "', [";
        for(its = data[*it].begin(); its!=data[*it].end(); its++){
            cout << "'" << *its << "'";
            if(next(its,1) != data[*it].end()){
                cout << ", ";
            }
        }
        cout<<"]]";
        if(next(it,1) != sorted_fruit.end()){
            cout<<", ";
        }
    }
    cout<<"]"<<endl;
    cout << "The most favorite fruit is " << most_name << endl;

    
    return 0;
}