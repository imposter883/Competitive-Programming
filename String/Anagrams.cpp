/*Check if Two Strings are Anagrams*/
#include<iostream>
#include<vector>
using namespace std;

bool Anagrams(string str1, string str2){
	
	if(str1.length()!=str2.length()){
		return false;
	}

	int n = str1.length();
	vector<int>arr(26,0);

	for(int i=0; i<n; i++){
		arr[str1[i]-'a']++;
		arr[str2[i]-'a']--;
	}

	for(auto it:arr){
		if(it!=0){
			return false;
		}
	}
	return true;
}

int main(){
	string str1,str2;
	cin>>str1>>str2;

	if(Anagrams(str1,str2)){
		cout<<"String are Anagrams."<<endl;
	}else{
		cout<<"String are not Anagrams."<<endl;
	}
	return 0;
}