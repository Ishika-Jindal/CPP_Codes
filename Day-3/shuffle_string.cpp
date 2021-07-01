// shuffle string using int array1 as the indices.

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr1[n];
	char arr2[n];
	for(int i=0;i<n;i++)
		cin>>arr1[i];
	for(int i=0;i<n;i++)
		cin>>arr2[arr1[i]];
	for(int i=0;i<n;i++){
		cout<<arr2[i]<<" ";
	}
}