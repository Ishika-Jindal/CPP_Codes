// Hospital who is having least doctors(1) is weakest.Return the indices in ascending
//      order of weakest hospitals.

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m,k,val;
	cin>>n>>m>>k;
	vector<vector<int>> mat;
	for(int i=0;i<n;i++){
		vector<int> a;
		for(int j=0;j<m;j++){
			cin>>val;
			a.push_back(val);
		}
		mat.push_back(a);
	}
	
	std::map<int,int> Map;
	for(int i=0;i<n;i++){
		int cnt=0;
		for(int j=0;j<m;j++){
			if(mat[i][j]==1)
				cnt++;
		}
		Map.insert(make_pair(cnt,i));
	}
	int c=0;
	for(auto &e1: Map){
		c++;
		if(c>k)
			break;
		cout<<e1.second<<" ";
	}
	return 0;
}