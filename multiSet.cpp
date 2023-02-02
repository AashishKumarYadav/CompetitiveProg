#include<bits/stdc++.h>
using namespace std;

int main(){

	multiset<string> s;

	int n;
	cin>>n;

	for(int i=0;i<n;++i){
		string str;
		cin>>str;

        s.insert(str);
	}


	for(auto it:s){
		cout<<it<<endl;
	}

/*
input->
8
abc
bcd
abc
zbc
zbc
ram
ram
ram

output->
abc
abc
bcd
ram
ram
ram
zbc
zbc
*/

	return 0;
}