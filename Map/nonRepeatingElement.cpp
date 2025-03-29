#include<iostream>
#include<vector>
#include<map>
using namespace std;

int nonRepeating(vector<int>&arr, int n){
	map<int,int>m;

	for(auto it:arr){
		m[it]++;
	}

	for(auto it: arr){
		if(m[it]==1){
			return it;
		}
	}
	return -1;
}

int main(){
	int n;
	cin>>n;

	vector<int>arr(n);
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}

	int ans = nonRepeating(arr,n);
	cout<<ans<<endl;

	return 0;
}