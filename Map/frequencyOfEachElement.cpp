/*Find The Frequency of Each Elements in an Array*/
#include<iostream>
#include<vector>
#include<map>
using namespace std;

void solve(vector<int>&arr, int n){
	map<int,int>m;

	for(auto it:arr){
		m[it]++;
	}

	for(auto it:m){
		cout<<"Element"<<" "<<it.first<<" "<<"Frequency"<<" "<<it.second<<endl;
	}
}

int main(){
	int n;
	cin>>n;

	vector<int>arr(n);

	for(int i=0; i<n; i++){
		cin>>arr[i];
	}

	solve(arr,n);

	return 0;
}