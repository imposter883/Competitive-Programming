/*Find the First Non-Repeating Character*/
#include<iostream>
#include<vector>
using namespace std;

char nonReapeating(string str){
	vector<int>freq(250,0);

	for(auto it:str){
		freq[it]++;
	}

	for(auto it:str){
		if(freq[it]==1){
			return it;
		}
	}
	return 1;
}

int main(){
	string str;
	cin>>str;

	char result = nonReapeating(str);

	if(result!=1){
		cout<<"First non Repeating Character is:"<<result<<endl;
	}else{
		cout<<"NO non Repeating Character is exist"<<endl;
	}
	return 0;
}