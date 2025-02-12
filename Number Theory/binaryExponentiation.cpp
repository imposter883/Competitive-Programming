#include<bits/stdc++.h>
using namespace std;

int Pow(int a, int b){
	if(b==0){
		return 1;
	}

	int x = Pow(a,b/2);
	int ans = 0;

	if(b%2==1){
		ans = x*x*a;
	}else{
		ans = x*x;
	}
}

int main(){
	int a,b;
	cin>>a>>b;

	cout<<"Power of"<<" "<<"("<<a<<","<<b<<")"<<":"<<" "<<Pow(a,b)<<endl;

	return 0;
}