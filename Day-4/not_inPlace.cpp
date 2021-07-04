// How many elements are not in place after sorting?

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,count;
	cin>>n;
	vector<int> v1,v2;
	int c;
	for(int i=0;i<n;i++){
		cin>>c;
		v1.push_back(c);
	}
	v2=v1;
	sort(v2.begin(),v2.end());
	for(int i=0;i<n;i++){
		if(v1[i]!=v2[i])
			count++;
	}
	cout<<count<<endl;
}