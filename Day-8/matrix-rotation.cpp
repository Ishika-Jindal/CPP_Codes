#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> rotate(vector<vector<int>> mat){
	for(int i=0;i<mat.size();i++){
		for(int j=0;j<mat.size();j++){
			swap(mat[i][j],mat[j][i]);
		}
	}
	for(int i=0;i<mat.size();i++){
		reverse(mat[i].begin(),mat[i].end());
	}
	return mat;
}
bool solve(vector<vector<int>>& mat,vector<vector<int>>& tar){
	int k=4;
	while(k--){
		mat=rotate(mat);
		if(mat==tar){
			return true;
		}
	}
	return false;
}
int main() {
	int n,a,b;
	cin>>n;
	vector<vector<int>> mat;
	vector<vector<int>> tar;
	for(int i=0;i<n;i++){
		vector<int> m;
		for(int j=0;j<n;j++){
			cin>>a;
			m.push_back(a);
		}
		mat.push_back(m);
	}
	for(int i=0;i<n;i++){
		vector<int> m;
		for(int j=0;j<n;j++){
			cin>>b;
			m.push_back(b);
		}
		tar.push_back(m);
	}
	bool ans=solve(mat,tar);
	if(ans==1) cout<<"true";
	else cout<<"false";
	return 0;
}