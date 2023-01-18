#include<bits/stdc++.h>
using namespace std;

int main(){

	map<string,int> m;

	int n;
	cin>>n;

	for(int i=0;i<n;++i){
		string str;
		cin>>str;
		m[str]++;
	}

	for(auto pr : m){
		cout<<pr.first<<" "<<pr.second<<endl;
	}

/*

input-->
8
abc
def
abc
ghj
jkl
ghj
abc
ghj

output-->
abc 3
def 1
ghj 3
jkl 1

*/

	return 0;
}