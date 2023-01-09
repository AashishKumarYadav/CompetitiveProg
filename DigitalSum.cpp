#include<iostream> 
using namespace std;


// --->  Digit sum of A no.


int Digit_Sum(int n){
	if(n==0) return 0;
    return Digit_Sum(n/10)+ (n%10); 
 }
int main(){
    
    int n;
    cin>>n;

    cout<<Digit_Sum(n);

	return 0;
}

/*
---> factorial of a no.

int fact(int n){

	if(n==0) return 1;

	return fact(n-1) * n;
}
int main(){
	int n;
	cin>>n;

	cout<<fact(n)<<endl;

	return 0;
}
*/

/*

--> Sum of array 

int solve(int arr[],int n){
	if(n < 0) return 0;
	return solve(arr,n-1) + arr[n];
}



int main()
{
	
	int n;
	cin>>n;

	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	cout<<solve(arr,n);
	return 0;
}*/