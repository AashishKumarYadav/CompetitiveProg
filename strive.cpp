#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    
    int arr[n] = {};
    
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }    
    
    for(int i=0;i<=n;i++){
        if(arr[i] - arr[i+1]> m){
            arr[i] = 1;
        }else{
            arr[i] = 0;
        }
    }
    
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    
}