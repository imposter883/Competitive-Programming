#include<bits/stdc++.h>
using namespace std;

int gcd1(int a,int b){
	while(b){
		a%=b;
		swap(a,b);
	}
	return a;
}

int gcd2(int a, int b){
	if(b==0){
		return a;
	}else{
		return gcd2(b,a%b);
	}
}

int lcm(int a, int b){
	return (a*b)/gcd2(a,b);
}

int main(){
	int a,b;
	cin>>a>>b;

	cout<<"GCD:"<<" "<<"("<<a<<","<<b<<"):"<<" "<<gcd2(a,b)<<endl;
	cout<<"LCM:"<<" "<<"("<<a<<","<<b<<"):"<<" "<<lcm(a,b)<<endl;

	return 0;
}