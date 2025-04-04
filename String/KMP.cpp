#include<bits/stdc++.h>
using namespace std;

void Prefix(vector<int>pi,string target,int n){
	int j=0;
	pi[0]=0;
	for(int i=1; i<n; i++){
		while(j>0 && target[i]!=target[j]){
			j=pi[j-1];
		}
		if(target[i]==target[j]){
			j++;
		}
		pi[i]=j;
	}
}

void KMP(string text, string target){
	int m = text.length();
	int n = target.length();

	vector<int>pi(n,0);
	Prefix(pi,target,n);

	int j=0;

	for(int i=0; i<m; i++){
		while(j>0 && text[i]!=target[j]){
			j=pi[j-1];
		}
		if(text[i]==target[j]){
			j++;
		}
		if(j==n){
			cout<<"Found at index:"<<i-n+1<<endl;
			j=pi[j-1];		}
	}
}

int main(){
	string text,target;
	cin>>text>>target;

	KMP(text,target);

	return 0;
}