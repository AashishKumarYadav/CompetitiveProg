#include<bits/stdc++.h>
using namespace std;

int main(){

	string s = "aashish";

	int cnt[26] = {0};

	for(int i=0;i<s.size();++i){
		cnt[s[i]-'a']++;
	}

	for(int i=0;i<26;++i){
		if(cnt[i]>0){
		cout<<(char)(i+'a')<<" "<<cnt[i]<<endl;
	    }
	}
	return 0;
}