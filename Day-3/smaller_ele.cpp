// Find the number of elements smaller than arr[i].

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	vector<int> v;
	for(int i=0;i<n;i++){
		int c=0;
		for(int j=0;j<n;j++){
			if(arr[j]<arr[i])
				c++;
		}
		v.push_back(c);
	}
	for(int i=0;i<n;i++)
		cout<<v[i]<<" ";
}