#include <iostream>
#include <string.h>
#include <map>
#include <iterator>

using namespace std;

int main(){

    int n;
    cin >> n;
	
	string word;
	map <string,int> data;
	
    for( int i=0; i<n ; i++ ){
        cin >> word;
        
        if(data.count(word) > 0){
        	data[word] += 1;
		}else{
			data[word] = 1;
		}   
    }
    int data_size = data.size();
    map<string,int>::iterator loc;
	loc = data.begin();

	for( int i=0; i<data_size; i++){
		if( loc->second > 1 ){
			cout << loc->first << " " << loc->second << endl;
		}
		loc++;
	}
}