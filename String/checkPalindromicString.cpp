#include<iostream>
using namespace std;

bool Palindrome(string str){
	int l=0,r=str.length()-1;

	while(l<r){
		if(str[l]!=str[r]){
			return false;
		}
		l++;
		r--;
	}
	return true;
}

int main(){
	string str;
	cin>>str;

	if(Palindrome(str)){
		cout<<"This is a Palindromic string"<<endl;
	}else{
		cout<<"This is not a Palindromic string."<<endl;
	}

	return 0;
}