#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
int hsh[N][26];


int main(){

	int t;
	cin>>t;

	while(t--){

		for(int i=0;i<N;i++){
			for (int j = 0; j < 26; ++j)
			{
				/* code */
				hsh[i][j] = 0;
			}
		}
		int n,q;
		cin>>n>>q;

		string s;
		cin>>s;

		for(int i = 0;i<n;i++){
			hsh[i+1][s[i]-'a']++;
		}
	

	for(int i=0;i<26;i++){
	   for(int j=1;j<=n;j++){
	     hsh[j][i] += hsh[j-1][i];
	   }
	}

	while(q--){
		int l,r;
		cin>>l>>r;

		int oddCnt = 0;

		for(int i=0;i<26;i++){
			int charCnt = hsh[r][i] - hsh[l-1][i];
			if(charCnt%2 != 0){
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



/*
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
	}*/
/*
input--->
2
5 5
abcec
1 2
2 5
3 5
1 5
1 4
5 5
aabbc
1 2
2 5
3 5
1 5
1 4


output-->
N0
N0
Yes
N0
N0
Yes
N0
Yes
Yes
Yes
*/

	
}