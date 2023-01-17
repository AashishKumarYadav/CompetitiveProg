#include<bits/stdc++.h>
using namespace std;

int main(){

	vector<pair<int,int>> vp = {{1,2},{3,4},{5,6}};

	vector<pair<int,int>> ::iterator it;

	for(it = vp.begin(); it != vp.end();++it){
		cout<<(*it).first <<" "<<(*it).second<<endl;
	}

	cout<<"second method"<<endl;

	for(it = vp.begin(); it != vp.end();++it){
		cout<<(it->first)<<" "<<(it->second)<<endl;
	}

	// improvment -->
	cout<<"range based loops"<<endl;

	vector<pair<int,int>> V_p = {{6,7},{8,9}};

	for(auto &value : V_p){
		cout<<value.first<<" "<<value.second<<endl;
	}

	//ep - 23 - 24

	return 0;
}