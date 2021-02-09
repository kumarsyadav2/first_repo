#include<iostream>
#include<array>
using namespace std;
int main(){
	array<int,5> data_array={11,22,33,44,55};
	cout<<data_array[2];
	cout<<data_array.at(1);
	cout<<data_array.front();
	cout<<data_array.back();
	data_array.fill(10);
	return 0;
}