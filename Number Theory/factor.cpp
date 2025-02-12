#include<bits/stdc++.h>
using namespace std;

void printFactor1(int n){
	for(int i=1; i<=n; i++){
		if(n%i==0){
			cout<<i<<" ";
		}
	}
	cout<<endl;
}

void printFactor2(int n){
	for(int i=1; i*i<=n; i++){
		if(n%i==0){
			cout<<i<<" ";
			if(i!=(n/i)){
				cout<<n/i<<" ";
			}
		}
	}
	cout<<endl;
}

int main(){
	int n;
	cin>>n;

	printFactor2(n);

	return 0;
}