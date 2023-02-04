#include<bits/stdc++.h>
using namespace std;

int main(){

	map<int,multiset<string>> marks_map;

	int n;
	cin>>n;

	for(int i=0;i<n;++i){
		int marks;
		string name;
		cin>>name>>marks;
		marks_map[-1*marks].insert(name);
	}

	for(auto &marks_Student_pr : marks_map){
		auto &students = marks_Student_pr.second;
		auto &marks = marks_Student_pr.first;
		for(auto &student : students){
			cout<<student<<" "<<-1*marks<<endl;
		}
	}

/*
input ->
4
Eve 78
Bob 99
Ali 77
Ali 77

output->
Bob 99
Eve 78
Ali 77
Ali 77

ep - 29
*/
	return 0;
}