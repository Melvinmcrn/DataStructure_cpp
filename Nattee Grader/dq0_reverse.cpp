#include <iostream>
#include <vector>

using namespace std;

void reverse(vector<int> &v,int a,int b) {
	vector<int> temp_vector;
	
	for( int i=0; i<a; i++){
		temp_vector.push_back(v[i]);
	}
	int j;
	for( j=b ; j>=a; j--){
		temp_vector.push_back(v[j]);
	}
	for( int i=b+1; i<v.size(); i++){
		temp_vector.push_back(v[i]);
	}
	v = temp_vector;
	
}

int main() {
	
	int n,a,b;
	cin >> n;
	vector<int> v;
	for (int i=0 ; i<n ; i++){
		int c;
		cin >> c;
		v.push_back(c);
	}
	cin >> a >> b;
	
	reverse(v,a,b);
	
	for (auto &x : v){
		cout << x << " ";
	}
	cout << endl;
}
