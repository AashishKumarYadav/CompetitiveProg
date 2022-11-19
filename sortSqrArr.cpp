#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> &v){
	int l_ptr = 0;
	int r_ptr = v.size()-1;

	vector<int> ans;

	while(l_ptr<=r_ptr){
		if(v[l_ptr]<v[r_ptr]){
			ans.push_back(abs(v[r_ptr])*abs(v[r_ptr]));
			r_ptr--;
		}
		else{
			ans.push_back(v[l_ptr]*v[l_ptr]);
			l_ptr++;
		}
	}

    sort(ans.begin(),ans.end());
    
	for(int i=0;i<ans.size();i++){
		cout<<ans[i]<<" ";
	}
	cout<<endl;
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


    /*
    input - 
    n = 6
    4 5 2 3 -8 1

    output
    1 4 9 16 25 64
    */

	return 0;
}