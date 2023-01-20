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


	return 0;
}