// Remove all occurences of a key  (inplace).

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,key;
	int arr[n];
	cin>>n>>key;
	for(int k=0;k<n;k++){
		cin>>arr[k];
	}
	int i=0,j=n-1;
	while(i<j){
		if(arr[i]==key){
			swap(arr[i],arr[j]);
			j--;
		}
		else
			i++;
	}
	for(int j=0;j<i+1;j++){
		cout<<arr[j]<<" ";
	}
	return 0;
}