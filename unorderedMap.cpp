#include<bits/stdc++.h>
using namespace std;

int main(){
	unordered_map<string,int> m;

	int n;
	cin>>n;

	for(int i=0;i<n;++i){
		string str;
		cin>>str;
		m[str]++;
	}

	int q;
	cin>>q;

	while(q--){
		string str;
		cin>>str;
		cout<<m[str]<<endl;
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
2
abc
def

output-->
3
1

*/
	return 0;
}