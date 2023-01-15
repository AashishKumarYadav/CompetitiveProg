#include<bits/stdc++.h>
using namespace std;

void printVector(vector<int> &v){

	cout<<"size of "<<v.size()<<endl;

	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}

int main()
{ 
// Nested Vectors

	int N;
	cin>>N;

	vector<vector<int>> v;

	for(int i=0;i<N;i++){
		int k;
		cin >> k;
		vector<int> temp;
		for(int j=0;j<k;++j){
			int x;
			cin>>x;
            temp.push_back(x);
		}
		v.push_back(temp);
	}

	for(int i=0;i<v.size();++i){
		printVector(v[i]);
	}

	/*
input -->
3
3
1 2 3
2
4 5
4
6 7 8 9

output-->
size of 3
1 2 3 
size of 2
4 5 
size of 4
6 7 8 9 

*/


/*
	vector<int> v;
    
    int n;
    cin>>n;
   
    int val;

    for(int i=0;i<n;i++){
    	cin>>val;
        v.push_back(val);
    }

    v[1] = 100;

    sort(v.begin(),v.end());

    v[4] = 67;
    int max = INT_MIN;
    int min = INT_MAX;
    for(int i=0;i<n;i++){
    	if(v[i]<min){
    		min = v[i];
    	}
    	if(v[i]>max){
    		max = v[i];
    	} 
    }

    cout<<min<<endl<<max;
*/

	return 0;

}