#include<bits/stdc++.h>
using namespace std;
int subArray(int arr[],int n){
	int pre[n] = {0};
	int ps[n] = {0};

	if(n==1) return n;

	pre[0]=1;
	ps[n-1]=1;
	int l=0;

	for(int i=1;i<n;++i){
		if(arr[i]>arr[i-1]){
			pre[i] = pre[i-1]+1;
		}else{
			pre[i] = 1;
		}
	}

	l = 1;
	for(int i=n-2;i>=0;i--){
		if(arr[i]<arr[i+1]){
			ps[i]=ps[i+1]+1;
		}else{
			ps[i]=1;
		}
	}

	int ans=0;
	l=1;
	for(int i=1;i<n;++i){
		if(arr[i]>arr[i-1]){
            l++;
		}else{
			l =1;
		}
		ans = max(ans,l);

	}

	for(int i=1;i<=n-2;i++){
		if(arr[i-1]<arr[i+1]){
			ans = max(pre[i-1]+ps[i+1],ans);
		}
	}
	return ans;
}
int main(){

	int q;
	cin>>q;


		while(q--){
		int n;
		cin>>n;

		int arr[n] = {};
		for(int i=0;i<n;++i){
			cin>>arr[i];
		}

		cout<<subArray(arr,n)<<endl;

	}
    /*
input->
5
2
1 2
5
1 2 5 3 4
6
1 2 3 1 2 3
5
1 2 2 3 4
1
1
output->
2
4
3
4
1
*/


	return 0;
}