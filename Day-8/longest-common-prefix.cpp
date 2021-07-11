// Find the longest common prefx in the string vector.

#include <bits/stdc++.h>
using namespace std;

string lcp(vector<string>& v){
	sort(v.begin(),v.end());
	string ans="";
	int n=v.size();
	for(int i=0;i<v[0].length();i++){
		if(v[0][i]==v[n-1][i])
			ans+=v[0][i];
		else break;
	}
	return ans;
}
int main() {
	int n;
	string temp;
	cin>>n;
	vector<string> s;
	for(int i=0;i<n;i++){
		cin>>temp;
		s.push_back(temp);
	}
	string ans=lcp(s);
	cout<<ans<<endl;
}