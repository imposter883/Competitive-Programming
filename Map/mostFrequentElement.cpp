/*Find the Most Frequent Elements in an Array*/
#include<iostream>
#include<vector>
#include<map>

using namespace std;

int mostFrequent(vector<int>&arr, int n){
	map<int,int>m;

	for(auto it:arr){
		m[it]++;
	}

	int maxfreq=0, mostFrequent=arr[0];

	for(auto it:m){
		if(it.second>maxfreq){
			maxfreq=it.second;
			mostFrequent=it.first;
		}
	}
	return mostFrequent;
}

int main(){
	int n;
	cin>>n;

	vector<int>arr(n);

	for(int i=0; i<n; i++){
		cin>>arr[i];
	}

	int ans = mostFrequent(arr,n);
	cout<<ans<<endl;

	return 0;
}