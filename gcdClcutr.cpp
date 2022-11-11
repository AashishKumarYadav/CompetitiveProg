#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;
	cin>>t;
    
    while(t--){
    	int n,q;
    	cin>>n>>q;

    	int arr[n+10];
    	int Frwrd[n+10];
    	int Bkwrd[n+10];

    	Frwrd[0] = Bkwrd[n+1] = 0;

    	for(int i = 1; i<=n ; i++){
    		cin>>arr[i];
    	}

    	for(int i = 1  ; i<=n ; i++){
    		Frwrd[i] = __gcd(Frwrd[i-1],arr[i]);
    	}

    	for(int i = n ; i >= 1 ; i-- ){
    		Bkwrd[i] = __gcd(Bkwrd[i+1],arr[i]);
    	}

    	while(q--){
    		int l,r;
    		cin>>l>>r;
    		int gc = 0;
    		cout<<__gcd(Frwrd[l-1],Bkwrd[r+1])<<endl;
    	}
    }

    /*
     input -
     1
     3 3
     2 6 9
     1 1
     2 2
     2 3
     
     output -
     3
     1
     2
     */

	return 0;
}