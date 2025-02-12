#include<bits/stdc++.h>
using namespace std;

bool isPrime1(int n){
	if(n==0 || n==1){
		return false;
	}

	for(int i=2; i<n; i++){
		if(n%i==0){
			return false;
		}
	}

	return true;
}

bool isPrime2(int n){
	if(n==0 || n==1){
		return false;
	}
	
	for(int i=2; i*i<=n; i++){
		if(n%i==0){
			return false;
		}
	}

	return true;
}

int main(){
	int n;
	cin>>n;


	if(isPrime2(n)){
		cout<<n<<" "<<"is Prime."<<endl;
	}else{
		cout<<n<<" "<<"is Not Prime."<<endl;
	}

	return 0;

}