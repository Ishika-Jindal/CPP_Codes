#include <bits/stdc++.h>
using namespace std;

int richest(vector<vector<int>> &acc,int n,int m){
	int max=0,cust=0;
	for(int i=0;i<n;i++){
		int sum=0;
		for(int j=0;j<m;j++){
			sum+=acc[i][j];
		}
		if(sum>max){
			max=sum;
			cust=i+1;
		}
		
	}
	return cust;
}

int main() {
	int n,m;
	int a;
	cin>>n>>m;
	vector<vector<int>> v;
	for(int i=0;i<n;i++){
		vector<int> vec;
		for(int j=0;j<m;j++){
			cin>>a;
			vec.push_back(a);
		}
		v.push_back(vec);
	}
	int cust=richest(v,n,m);
	cout<<cust<<endl;
	return 0;
}
