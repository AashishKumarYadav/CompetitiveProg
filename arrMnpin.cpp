#include<bits/stdc++.h>
using namespace std;

const int N = 1e7+10;
long long int arr[N];

int main()
{
	int n , q;
	cin>>n>>q;

	while(q--){
		int idx1 , idx2 , val;

		cin>>idx1>>idx2>>val;

		arr[idx1] += val;
		arr[idx2] -= val;
	}

	for(int i=1;i<=n;i++){
		arr[i] += arr[i-1];
	}

	long long max = -9999;

	for(int i = 1;i<=n ;i++){
		if(max < arr[i]){
			max = arr[i];
		}
	}

	cout<<max<<endl;

	/*
	input-
	size 5, qry 3
	ind1  ind2 val
    1      3   100
    2      5   100
	3      4   100

	output-
	200
	*/

	return 0;
}