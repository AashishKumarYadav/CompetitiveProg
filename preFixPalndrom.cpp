#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;
	cin>>t;

	while(t--){
		int n,q;
		cin>>n>>q;

		string s;
		cin>>s;

		while(q--){
			int l,r;
			cin>>l>>r;

			int hsh[26];
			for(int i=0;i<26;i++){
				hsh[i] = 0;
			}

			l--;r--;
			for(int i=l;i<=r;i++){
				hsh[s[i]-'a']++;
			}

			int oddCnt = 0;

			for(int i=0;i<26;i++){
				if(hsh[i]%2 != 0){
					oddCnt++;
				}
			}

			if(oddCnt > 1){
				cout<<"N0"<<endl;
			}else{
				cout<<"Yes"<<endl;
			
			}
		}
	}
}