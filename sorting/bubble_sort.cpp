#include<iostream>
using namespace std;
int bubble_sort(int A[], int N){
	int temp;
	 for(int round=1;round<=N-1;round++){
	 	for(int i=0;i<=N-1-round;i++){
	 		if(A[i]>A[i+1]){
	 			temp=A[i];
	 			A[i]=A[i+1];
	 			A[i+1]=temp;
	 		}
	 	}
	 }
}
    int main(){
	int n,i;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	bubble_sort(a,n);
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
	return 0;
}
