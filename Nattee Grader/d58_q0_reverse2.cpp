#include <iostream>
#include <vector>

using namespace std;

void reverse(vector<int> &v,vector<int>::iterator a,vector<int>::iterator b) {
	vector<int> x;
	
	vector<int>::iterator i = v.begin();
	while( i < a ){
		x.push_back(*i);
		i++;
	}
	vector<int>::iterator j = b-1;
	while( j >= a ){
		x.push_back(*j);
		j--;
	}
	while( b < v.end() ){
		x.push_back(*b);
		b++;
	}
	v = x;
	
}

int main(){
	int n,a,b;
	cin >> n;
	vector<int> v;
	for (int i=0; i<n ;i++){
		int c;
		cin >> c;
		v.push_back(c);
		
	}
	cin >> a >> b;
	
	reverse(v, v.begin()+a, v.begin()+b+1);
	
	for (auto &x : v){
		cout << x << " ";
	}
	cout << endl;
}
