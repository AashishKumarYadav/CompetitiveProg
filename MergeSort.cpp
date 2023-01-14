#include<bits/stdc++.h>
using namespace std;
int const N = 1e5+10;
int Array[N];

void merge(int left,int right,int mid){
	int L_Size = mid-left+1;
	int L_Arr[L_Size+1];

	int R_Size = right - mid; // right - (mid+1) + 1
	int R_Arr[R_Size+1];

	for(int i=0; i<L_Size; ++i){
		L_Arr[i] = Array[i+left];
	}

	for(int i=0; i<R_Size; ++i){
        R_Arr[i] = Array[i+mid+1];
	}

	L_Arr[L_Size] = R_Arr[R_Size] = INT_MAX;

	int L_Idx = 0;
	int R_Idx = 0;

	for(int i=left; i<=right; ++i){
		if(L_Arr[L_Idx]<=R_Arr[R_Idx]){
			Array[i] = L_Arr[L_Idx];
			L_Idx++;
		}else{
			Array[i] = R_Arr[R_Idx];
			R_Idx++;
		}
	}
}

void mergeSort(int l,int r){

	if(l==r) return;

	int mid = (l+r)/2;

	mergeSort(l,mid);
	mergeSort(mid+1,r);
	
	merge(l,r,mid);
}

int main(){

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
    	cin>>Array[i];
    }

    mergeSort(0,n-1);

    for(int i=0;i<n;i++){
    	cout<<Array[i]<<" ";
    }

    return 0;
}