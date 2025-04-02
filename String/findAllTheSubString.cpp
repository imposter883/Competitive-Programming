/*Find All Substrings of a String*/
#include<iostream>
#include<vector>
using namespace std;

vector<string>subString(string str){
	vector<string>arr;
	int n = str.length();
	for(int i=0; i<n; i++){
		string temp="";
		for(int j=i; j<n; j++){
			temp+=str[j];
			arr.push_back(temp);
		}
	}
	return arr;
}

int main(){
	string str;
	cin>>str;

	vector<string>ans=subString(str);

	for(auto it:ans){
		cout<<it<<endl;
	}

	return 0;
}