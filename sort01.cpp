#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> &v){

	int l_ptr = 0;
	int r_ptr = v.size()-1;

	while(l_ptr<r_ptr){
		if(v[l_ptr]==1 && v[r_ptr]==0){
			v[l_ptr++] = 0;
            v[r_ptr--] = 1;
		}

		if(v[l_ptr] == 0){
			l_ptr++;
		}

		if(v[r_ptr] == 1){
			r_ptr--;
		}
	}

	return ;
}

int main(){

	int n;
	cin>>n;

	vector<int> v;
    
    for(int i=0;i<n;i++){
    	int val;
    	cin>>val;
    	v.push_back(val);
    }


    solve(v);

    for(int i=0;i<n;i++){
    	cout<<v[i]<<" ";
    }
    cout<<endl;

	return 0;
}