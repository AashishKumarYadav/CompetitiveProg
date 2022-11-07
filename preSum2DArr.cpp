#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+10;
int arr[N][N];
long long pfArr[N][N];

int main(){

	int n;
	cin>>n;

	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>arr[i][j];
			pfArr[i][j] = arr[i][j] + pfArr[i-1][j] + pfArr[i][j-1] - pfArr[i-1][j-1];
		}

	}
   
	int q;
	cin>>q;

	while(q--){

		int a,b,c,d;
		cin>>a>>b>>c>>d;
	

		cout<<pfArr[c][d] - pfArr[a-1][d] - pfArr[c][b-1] + pfArr[a-1][b-1]<<endl;
	}
	/*
    input-
    3
    3 6 2
    8 9 2
    3 4 1
    2
    1 1 2 2
    1 2 3 3

    output-
    3+6+8+9 = 26

    6+2+9+2+4+1 = 24
	*/

	return 0;
}