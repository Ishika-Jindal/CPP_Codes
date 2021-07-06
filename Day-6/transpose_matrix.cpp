// Transpose of a matrix given.

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m,c;
	cin>>n>>m;
	vector<vector<int>> mat;
	vector<vector<int>> matT;
	for(int i=0;i<n;i++){
		vector<int> v;
		for(int j=0;j<m;j++){
			cin>>c;
			v.push_back(c);
		}
		mat.push_back(v);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
			matT[j][i]=mat[i][j];
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++)
			cout<<matT[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}