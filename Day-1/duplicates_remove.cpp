// Remove duplicates in place from non-decreasing array.

#include <iostream>
using namespace std;

int main() {
	int n;
	int arr[n];
	cin>>n;
	for(int k=0;k<n;k++){
		cin>>arr[k];
	}
	int i=0;
	for(int j=1;j<n;j++){
		if(arr[i]!=arr[j]){
			arr[++i]=arr[j];
			
		}
	}
	for(int j=0;j<i+1;j++){
		cout<<arr[j]<<" ";
	}
	return 0;
}