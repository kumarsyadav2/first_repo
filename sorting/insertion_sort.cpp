#include<iostream>
using namespace std;
int insertion_sort(int[],int);
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	insertion_sort(a,n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
insertion_sort(int a[],int n){
	int i,j,temp;
	for(i=0;i<n;i++){
		temp=a[i];
		for(j=i-1;j>=0&&temp<a[j];j--)
			a[j+1]=a[j];
		a[j+1]=temp;
	}
}