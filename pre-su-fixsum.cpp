#include<bits/stdc++.h>
using namespace std;

bool checkTrue(vector<int> &v){

	/*
	size 5
	val 6 4 3 1 6
    
     6+4=10,3+1+6=10
     10 == 10

     output 1
	*/


    int total_sum = 0;
	for(int i=0;i<v.size();i++){
		total_sum += v[i];
	}

    int pre_sum = 0;
	for(int i=0;i<v.size();i++){

		pre_sum += v[i];

		int sufix_sum = total_sum - pre_sum;

		if(pre_sum == sufix_sum){
			return true;
		}

	}

	return false;
}
int main(){
    
    int n ;
    cin>>n;

    vector<int>v;

    for(int i=0;i<n;i++){
    	int val;
    	cin>>val;
    	v.push_back(val);
    }

    cout<<checkTrue(v)<<endl;

	return 0;
}