// Find if the matrix is special or not, special if all possible diagonals
//   from top-left to botton-right are having same elements.

#include <bits/stdc++.h>
using namespace std;

bool solve(vector<vector<int>> v){
	for(int i=0;i<v.size();i++){
		for(int j=0;j<v[0].size();j++){
			if(i>0 && j>0 && (v[i-1][j-1]!=v[i][j]))
				return false;
		}
	}
	return true;
}
int main() {
	int n,m,c;
	cin>>n>>m;
	vector<vector<int>> mat;
	for(int i=0;i<n;i++){
		vector<int> v;
		for(int j=0;j<m;j++){
			cin>>c;
			v.push_back(c);
		}
		mat.push_back(v);
	}
	bool temp=solve(mat);
	if(temp) cout<<"Special";
	else cout<<"Not Special";
}