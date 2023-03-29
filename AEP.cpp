#include<bits/stdc++.h>
using namespace std;

int main()
{

	int n;
	cin>>n;

	int arr[n];

	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}


	vector<int> v;

	for(int i=0;i<n;i++)
	{ 
		 int cnt = 0;
		 {
         for(int j=i;j>=0;j--)
         	{  
         		if(arr[i]<arr[j]) cnt++;
         	}
         }
         v.push_back(cnt);
	}

    

    for(int i=0;i<n;i++)
    {
    	cout<<v[i]<<" ";
    }

/*
input->
6
4 9 5 3 2 10

output->
0 0 1 3 4 0 
*/


	return 0;
}