#include<bits/stdc++.h>
using namespace std;

int main(){

	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
    v.push_back(4);
	v.push_back(5);

	int k = 2;

	k = k%v.size();

	reverse(v.begin(),v.end());
	reverse(v.begin(),v.begin()+k);
	reverse(v.begin()+k,v.end());

	for(int a:v){
		cout<<a<<" ";
	}

	/*
	input
	1 2 3 4 5

	output
	4 5 1 2 3
	*/

	return 0;
}