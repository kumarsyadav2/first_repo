#include<iostream>
using namespace std;
int min(int[],int,int);
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
 	 cin>>a[i];
 	int k,temp,loc;
 	for(k=0;k<n-1;k++){
 		loc=min(a,k,n);
 		temp=a[k];
 		a[k]=a[loc];
 		a[loc]=temp;
 	}
 	for(k=0;k<n;k++)
 		cout<<a[k]<<" ";
	return 0;
}
int min(int A[],int K,int N){
	int j,loc,min;
	min=A[K];
	loc=K;
	for(j=K+1;j<=N-1;j++)
		if(min>A[j]){
			min=A[j];
			loc=j;
		}
		return (loc);
}