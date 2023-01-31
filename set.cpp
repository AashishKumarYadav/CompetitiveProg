#include<bits/stdc++.h>
using namespace std;

int main()
{
	set<string> s;

	int n;
	cin>>n;

	for(int i=0;i<n;++i){
		string str;
		cin>>str;
		s.insert(str);
	}
	
	//for(auto it=s.begin();it!=s.end();++it){
	//	cout<<(*it)<<endl;
	//}

	for(auto &it : s){
		cout<<it<<endl;
	}

	/*
	input -->
	8
abc
bcd
abc
zbc
zbc
ram
ram
ram

output-->

abc
bcd
ram
zbc
*/

	return 0;
}