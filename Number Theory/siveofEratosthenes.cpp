#include<bits/stdc++.h>
using namespace std;

void sive(int n){
	vector<bool>prime(n+1,true);
	prime[0]=false;
	prime[1]=false;

	for(int i=2; i*i<=n; i++){
		if(prime[i]==true){
			for(int j= i*i; j<=n; j+=i){
				prime[j]=false;
			}
		}
	}

	for(int i=0; i<n; i++){
		if(prime[i]){
			cout<<i<<" ";
		}
	}
	cout<<endl;
}

int main(){
	int n;
	cin>>n;

	sive(n);

	return 0;
}