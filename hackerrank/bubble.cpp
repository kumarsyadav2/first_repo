#include<iostream>
using namespace std;
int bubble(int[], int);
int main(){
	int n,t=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	t=bubble(a,n);
	cout<<"Array is sorted in "<<t<<" swaps."<<endl;
	cout<<"First Element: "<<a[0]<<endl;
	cout<<"Last Element: "<<a[n-1]<<endl;
	return 0;
}
int bubble(int a[],int n){
	int i,j,k,z=0;
	for(i=1;i<n;i++){
		for(j=0;j<n-i;j++){
			if(a[j]>a[j+1]){
				z++;
				k=a[j+1];
				a[j+1]=a[j];
				a[j]=k;
			}
		}
	}
	return z;
}