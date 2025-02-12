#include<bits/stdc++.h>
using namespace std;

int modularExpon(int a, int b, int m){
	if(b==0){
		return 1;
	}

	int x = modularExpon(a,b/2,m);
	int ans = 0;

	if(b%2==1){
		ans = ((x*x)%m);
		ans = (ans*(a%m))%m;
	}else{
		ans = ((x*x)%m);
	}

	return ans;
}

int main(){
	int a,b,m;
	cin>>a>>b;

	m=100;

	cout<<"Modular Exponentiation"<<" "<<"("<<a<<","<<b<<")"<<":"<<" "<<modularExpon(a,b,m)<<endl;

	return 0;

}