// Given a sqaure matrix od 0's and 1's. Perform 2 tasks:
//   1.) reverse every row, 2.) flip the numbers(0->1,1->0).

#include <bits/stdc++.h>
using namespace std;


int main() {
	int n,m,c;
	cin>>n;
	vector<vector<int>> mat;
	for(int i=0;i<n;i++){
		vector<int> v;
		for(int j=0;j<n;j++){
			cin>>c;
			v.push_back(c);
		}
		mat.push_back(v);
	}
	for(int i=0;i<n;i++)
		reverse(mat[i].begin(),mat[i].end());
	for(int i=0;i<mat.size();i++){
		for(int j=0;j<mat[0].size();j++)
			mat[i][j]=1-mat[i][j];
	}
	for(int i=0;i<mat.size();i++){
		for(int j=0;j<mat[0].size();j++)
			cout<<mat[i][j]<<" ";
		cout<<endl;
	}
}