// Find special number in matrix such that:
//    Special number is---- 1.) min in its row, 2.) max in its column.

#include <bits/stdc++.h>
#include <climits>
using namespace std;


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
	int k;
	for(int i=0;i<n;i++){
		int min=INT_MAX;
		int max=INT_MIN;
		for(int j=0;j<m;j++){
			if(mat[i][j]<min){
				min=mat[i][j];
				k=j;
			}
		}
		for(int j=0;j<n;j++)
			if(mat[j][k]>max)
				max=mat[j][k];
		if(min==max){
			cout<<"Special No is : "<<min;
			break;
		}	
	}
}