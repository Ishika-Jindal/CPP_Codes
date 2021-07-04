#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	vector<int> v;
	for(int i=1;i<n;i=i+2){
		int freq=arr[i-1];
		int val=arr[i];
		while(freq--){
			v.push_back(val);
		}
	}
	for(int i=0;i<v.size();i++)
		cout<<v[i]<<" ";
	return 0;
}