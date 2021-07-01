#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,ext,a;
	cin>>n>>ext;
	vector<int> v;
	vector<bool> vec;
	for(int i=0;i<n;i++){
		cin>>a;
		v.push_back(a);
	}
	int mx=*max_element(v.begin(),v.end());
	cout<<mx<<endl;
	for(auto &i:v){
		if(i+ext >=mx)
		//	vec.push_back(true);
			cout<<"true"<<" ";
		else
		//	vec.push_back(false);
			cout<<"false"<<" ";
	}
	/*for(int i=0;i<n;i++){
		cout<<vec[i]<<" ";
	}*/
}