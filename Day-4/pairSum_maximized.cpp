// Find pairs (ai,bi), such that minimum of ai and bi is maximized.

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,c,mxm;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++){
		cin>>c;
		v.push_back(c);
	}
	sort(v.begin(),v.end(),greater<int> ());
	for(int i=1;i<n;i=i+2){
		mxm+=v[i];
	}
	cout<<mxm<<" ";
}