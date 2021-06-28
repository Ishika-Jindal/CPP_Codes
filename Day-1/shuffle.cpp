// Shuffle the array in asked manner.

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	int arr[n],ar[n];
	cin>>n;
	for(int k=0;k<n;k++){
		cin>>arr[k];
	}
	int x=0;
	for(int i=0,j=n/2;i<n/2;i++,j++){
		ar[x]=arr[i];
		ar[x+1]=arr[j];
		x+=2;
	}
	for(int j=0;j<n;j++){
		cout<<ar[j]<<" ";
	}
	return 0;
}