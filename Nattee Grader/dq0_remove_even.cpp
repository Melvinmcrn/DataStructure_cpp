#include <iostream>
#include <vector>

using namespace std;

void remove_even(vector<int> &v, int a, int b){
	
	vector<int> x;
	int i;
	for( i=0; i<v.size(); i++){
		if (i<a || i>b || i%2!=0){
			x.push_back(v[i]);
		}
	}
	v = x;
}

int main(){
	
	int n,a,b;
	cin >> n;
	vector<int> v;
	for( int i=0; i<n ; i++){
		int c;
		cin >> c;
		v.push_back(c);
	}
	cin >> a >> b;
	
	remove_even(v,a,b);
	
	for (auto &x : v){
		cout << x << " ";
	}
	cout << endl;
}
