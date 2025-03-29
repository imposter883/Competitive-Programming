/*Find the Majority Element of an array*/
#include<iostream>
#include<vector>
#include<map>
using namespace std;

int solve(vector<int>&arr, int n){
	map<int,int>m;
	for(auto it:arr){
		m[it]++;
		if(m[it]>n/2){
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

	int ans = solve(arr,n);

	if(ans==-1){
		cout<<"NO Mejority Elements Present"<<endl;
	}else{
		cout<<ans<<endl;
	}
	return 0;
}