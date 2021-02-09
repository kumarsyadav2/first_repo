#include<iostream>
using namespace std;
int main(){
	int n,d,e,b=0,c=0;
	cin>>n;
	long int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	d=a[0];
	e=a[0];
	for(int i=0;i<n;i++){
		if(a[i]>d)
			{ d=a[i];
				b++;}
		if(a[i]<e) 
			{ e=a[i];
				c++;}
	}
	cout<<b<<" "<<c;
	return 0;
}