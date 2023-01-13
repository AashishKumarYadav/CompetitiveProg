#include<bits/stdc++.h>
using namespace std;

int main(){

	pair<int,string> p;

	//p = make_pair(02,"Aashish");
	p = {02,"Aashish"};

	cout<<p.first<<" "<<p.second<<endl;

	pair<int,int> p_arr[3];
	p_arr[0] = {1,1};
	p_arr[1] = {2,2};
	p_arr[2] = {3,3};

	for(int i=0;i<3;++i){
		cout<<p_arr[i].first <<" "<<p_arr[i].second<<endl;
	}

	swap(p_arr[2],p_arr[0]);
	cout<<"after swaping "<<endl;	

	for(int i=0;i<3;++i){
		cout<<p_arr[i].first <<" "<<p_arr[i].second<<endl;
	}

	cin>>p.first;
	cin>>p.first;
	cout<<p.first<<" "<<p.second;

	//input = 4

	/*
	output-->
	2 Aashish
    1 1
    2 2
    3 3
    after swaping 
    3 3
    2 2
    1 1
    4 Aashish


    ignore --> [21]
	*/

	return 0;
}