#include<bits/stdc++.h>
using namespace std;
 int main(){

 	unordered_set<string> s;

 	int n;
 	cin>>n;

 	for(int i=0;i<n;++i){
 		string str;
 		cin>>str;

 		s.insert(str);
 	}

 	int q;
 	cin>>q;

 	while(q--){
 		string str;
 		cin>>str;

 		if(s.find(str) == s.end()){
 			cout<<"NO"<<endl;
 		}else{
 			cout<<"Yes"<<endl;
 		}
 	}


 	/*
 	input-->
 	8
abc
bcd
abc
zbc
zbc
ram
ram
ram
3
ram
syam
zbc


 	output-->
Yes
NO
Yes


 	*/

 	return 0;
 }