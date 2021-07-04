// Find sum of each pair considering left and right as array indices where left<=right.

#include <bits/stdc++.h>
using namespace std;
int sum(int arr[],int l,int r){
	if(l==0)
		return arr[r];
	else 
		return arr[r]-arr[l-1];
}
int main() {
	int n,left,right;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int car[n];
	car[0]=arr[0];
	for(int i=1;i<n;i++){
		car[i]=car[i-1]+arr[i];
	}
	vector<int> v;
	int x=3;
	while(x--){
		cin>>left>>right;
		int a=sum(car,left,right);
		v.push_back(a);
	}
	for(int i=0;i<v.size();i++)
		cout<<v[i]<<" ";
}
